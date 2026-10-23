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
    
int sumtree(TreeNode* root,int &maxi){
      ////MY aproach
    if(root==NULL) return 0;
    int lm=max(0,sumtree(root->left,maxi));
    int rm=max(0,sumtree(root->right,maxi));
    maxi=max(maxi,lm+rm+root->val);

    return root->val+max(rm,lm);


}
    int maxPathSum(TreeNode* root) {
        int maxi=INT_MIN;
        sumtree(root,maxi);
        return maxi;
    }
};