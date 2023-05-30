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
class Solution {
public:
    int minDepth(TreeNode* root) {
        if(root==NULL)return 0;
        unsigned int rh=UINT_MAX,lh=UINT_MAX;
        if(root->left==NULL && root->right==NULL)
        {
            return 1;
        }
        if(root->left!=NULL )
        {
            lh=minDepth(root->left);
           
        }
        if(root->right!=NULL)
        {
            rh=minDepth(root->right);
        }
        return 1+min(lh,rh);
    }
};
