/*
 * @lc app=leetcode id=113 lang=cpp
 *
 * [113] Path Sum II
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    void solve (TreeNode *root, int sum, int targetSum, vector <int> &temp, vector <vector <int>> &ans) { 
        if (root->left!=NULL) {
            sum+=root->left->val;
            temp.push_back(root->left->val);
            solve(root->left, sum, targetSum, temp, ans);
            sum-=root->left->val;
            temp.pop_back();
        }
        if (root->right) {
            sum+=root->right->val;
            temp.push_back(root->right->val);
            solve(root->right, sum, targetSum, temp, ans);
            sum-=root->right->val;
            temp.pop_back();
        }
        if (root->left==NULL && root->right==NULL && sum==targetSum) ans.push_back(temp);
    }

    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector <int> temp;
        vector <vector <int>> ans;
        if (root!=NULL) {
            temp.push_back(root->val);
            solve(root, root->val, targetSum, temp, ans);
        }
        return ans;
    }
};
// @lc code=end

