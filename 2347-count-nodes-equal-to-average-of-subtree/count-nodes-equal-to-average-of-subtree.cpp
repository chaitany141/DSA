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
int result = 0;
    pair<int, int> solve(TreeNode* root){
        if(!root){
            return {0, 0};
        }
        auto p1 = solve(root->left);
        auto p2 = solve(root->right);

        int totalSum = p1.first + p2.first + root->val;
        int totalCnt = p1.second + p2.second + 1;

        int avg = totalSum / totalCnt;
        if(root->val == avg){
            result++;
        }

        return {totalSum, totalCnt};
    }

    int averageOfSubtree(TreeNode* root){
        

        solve(root);

        return result;
    }
};


// class Solution {
// public:
// int ans = 0;

//     int findSum(TreeNode* root, int &cnt){
//         if(root == NULL) return 0;
//         cnt++;
//         int lSum = findSum(root->left, cnt);
//         int rSum = findSum(root->right, cnt);

//         return lSum + rSum + root->val;
//     }

//     void solve(TreeNode* root){
//         if(root == NULL) return  ;
//         int cnt = 0;
//         int sum = findSum(root, cnt);

//         if(root->val == sum / cnt){
//             ans += 1;
//         }
//         solve(root->left);
//         solve(root->right);
//     }

//     int averageOfSubtree(TreeNode* root) {
//         if(root == NULL) return 0;

//         solve(root);

//         return ans;
//     }
// };