#include<bits/stdc++.h>
using namespace std;

Node *firstNode(Node *head)
{
    if(!head)return NULL;
    Node* slow = head;
    Node* fast = head;
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast){
            fast = head;
            while(slow != fast){
                slow = slow->next;
                fast = fast->next;
            }
            return slow;
        };
    }
    return false;
}

int main(){
    return 0;
};