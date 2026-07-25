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

int idx = 0;

void fill(TreeNode* root, vector<int>& arr) {
    if (!root) return;

    fill(root->left, arr);
    root->val = arr[idx++];
    fill(root->right, arr);
}

    void inorder(TreeNode* root, vector<int>& arr){
        if(!root) return;
        inorder(root->left, arr);
        arr.push_back(root->val);
        inorder(root->right, arr);
    }

    TreeNode* bstToGst(TreeNode* root) {
        if(!root) return NULL;

        vector<int> in;

        inorder(root, in);

        int sum = 0;
        for(int i=0; i<in.size(); i++){
            sum += in[i];
        }
        vector<int> arr(in.size());
        int temp = 0;
        for(int i = in.size() - 1; i >= 0; i--){
            temp += in[i];
            arr[i] = temp;

        }
        
        fill(root, arr);
        return root;

   
    }
};