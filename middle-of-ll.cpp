#include<bits/stdc++.h>
using namespace std;

Node *findMiddle(Node *head) {
    Node* slow = head;
    Node* fast = head;
    while(fast and fast->next){
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}

int main(){
    return 0;
};