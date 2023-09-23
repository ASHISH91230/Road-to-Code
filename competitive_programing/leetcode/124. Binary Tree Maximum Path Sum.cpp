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
   int maxPathSum(TreeNode* root) {
        int maxi = INT_MIN;
        solve(root, maxi);
        return maxi;
    }

    int solve(TreeNode* root, int &maxi){
        if(root == NULL) return 0;

        int l = max( solve(root->left,maxi) , 0 );
        int r = max( solve(root->right,maxi) , 0 );

        maxi = max(maxi, root->val+l+r);

        return root->val + max(l,r);

    }
};