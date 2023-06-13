#include<bits/stdc++.h>
using namespace std;

bool detectCycle(Node *head)
{
	if(!head)return false;
    Node* slow = head;
    Node* fast = head;
    while(fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;
        if(fast == slow)return true;
    }
    return false;
}

int main(){
    return 0;
};