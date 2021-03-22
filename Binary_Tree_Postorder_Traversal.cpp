/*
https://leetcode.com/problems/binary-tree-postorder-traversal/
*/

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        if(root == NULL) return ans;
        stack<TreeNode *> s;
        TreeNode * curr = root;
        while(1){
            while(curr!=NULL){
                s.push(curr);
                s.push(curr);
                curr = curr->left;
            }
            if(s.empty()) break;
            curr = s.top();
            s.pop();
            if(!s.empty() && s.top() == curr){
                curr = curr->right;
            }
            else{
                ans.push_back(curr->val);
                curr = NULL;
            }
        }
        return ans;
    }
};
