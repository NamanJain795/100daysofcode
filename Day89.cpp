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
    int height(TreeNode* root){
        if(root == NULL){
            return 0;
        }
        int l = height(root -> left);
        int r = height(root -> right);
        int ans = max(l,r)+1;
        return ans;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root == NULL){
            return 0;
        }
        int l = diameterOfBinaryTree(root -> left);
        int r = diameterOfBinaryTree(root -> right);
        int t = height(root -> left) + height(root -> right) ;

        int ans = max(l,max(r,t));

        return ans;
    }
};