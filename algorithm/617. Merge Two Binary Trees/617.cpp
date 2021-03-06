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
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
        if (!t1 && !t2)
            return NULL;
        if(t1 && t2)
        {
            TreeNode * tem = new TreeNode(0);
            tem->val = (t1->val + t2->val);
            tem->left = mergeTrees(t1->left, t2->left);
            tem->right = mergeTrees(t1->right, t2->right);
            return tem;
        }
        else if (t1 && !t2)
        {
            return t1;
        }
        else
            return t2;
    }
};
