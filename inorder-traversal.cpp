#include<bits/stdc++.h>
using namespace std;

void inorder(TreeNode* root, vector<int>&ans){
    if(!root)return;
    if(root->left)inorder(root->left, ans);
    ans.push_back(root->data);
    if(root->right)inorder(root->right, ans);
}

vector<int> getInOrderTraversal(TreeNode *root)
{
    vector<int>ans;
    if(!root)return ans;
    inorder(root, ans);
    return ans;
}

int main(){
    
    return 0;
};