#include<bits/stdc++.h>
using namespace std;

Node* findIntersection(Node *f, Node *s)
{
    //Write your code here
	if(!f || !s) return NULL;
	Node* a = f;
	Node* b = s;
	while(1){
		if(a == b) return a;
		a = a->next;
		b = b->next;
		if(!a && !b) return NULL;
		if(!a) a = s;
		if(!b) b = f;

	}
	return NULL;
}

int main(){
    
    return 0;
};