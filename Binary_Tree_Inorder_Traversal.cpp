/*
https://leetcode.com/problems/binary-tree-inorder-traversal/
hi
*/

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        if(root == NULL) return ans;
        TreeNode *curr = root;
        stack<TreeNode *> s;
        while(curr != NULL || !s.empty()){
            while(curr != NULL){
                s.push(curr);
                curr = curr->left;
            }
            curr = s.top();
            ans.push_back(curr->val);
            s.pop();
            curr = curr->right;
        }
        return ans;
    }
};
