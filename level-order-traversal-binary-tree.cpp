#include<bits/stdc++.h>
using namespace std;

vector<int> getLevelOrder(BinaryTreeNode<int> *root)
{
    vector<int>ans;
    if(root == NULL)return ans;
    queue<BinaryTreeNode<int>*> q;
    q.push(root);
    while(!q.empty()){
        BinaryTreeNode<int> * t = q.front();
        q.pop();
        ans.push_back(t->val);
        if(t->left)q.push(t->left);
        if(t->right)q.push(t->right);
    }
    return ans;
}

int main(){
    
    return 0;
};