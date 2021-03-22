/*
https://leetcode.com/problems/binary-tree-preorder-traversal/
*/

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        if(root == NULL) return ans;
        stack<TreeNode *> s;
        TreeNode *curr = root;
        while(!s.empty() || curr!=NULL){
            while(curr!=NULL){
                ans.push_back(curr->val);
                if(curr->right) s.push(curr->right);
                curr = curr->left;
            }
            if(!s.empty()){
                curr = s.top();
                s.pop();
            }
            
        }
        return ans;
    }
};
