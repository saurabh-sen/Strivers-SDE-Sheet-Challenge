#include<bits/stdc++.h>
using namespace std;

LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    if(!head)return NULL;
    LinkedListNode<int> * prev=NULL, *cur = head, *next = head->next;
    while(cur){
        next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
    }
    return prev;
}

int main(){
    return 0;
};