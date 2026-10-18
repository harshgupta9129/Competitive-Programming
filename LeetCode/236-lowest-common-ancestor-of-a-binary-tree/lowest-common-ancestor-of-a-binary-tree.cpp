/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    void traverse (TreeNode* root, TreeNode* prev, unordered_map <TreeNode*, TreeNode*> &mp) {
        if (root == NULL) return;
        mp[root] = prev;
        if (root->left != NULL) traverse(root->left, root, mp);
        if (root->right != NULL) traverse(root->right, root, mp);
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (root == NULL || root == p || root == q) return root;
        unordered_map <TreeNode*, TreeNode*> mp;
        traverse(root, NULL, mp);
        unordered_set <TreeNode*> st;
        while (p != NULL) {
            st.insert(p);
            p = mp[p];
        }
        while (q != NULL) {
            if (st.count(q)) return q;
            q = mp[q];
        }
        return NULL;
    }
};