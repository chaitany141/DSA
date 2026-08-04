/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

    void serializeHelper(TreeNode* root, string &s){
        if(!root){
            s += "#,";
            return;
        }

        s+= to_string(root->val) + ",";
        serializeHelper(root->left, s);
        serializeHelper(root->right, s);

    }


    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        string s;
        serializeHelper(root, s);
        return s;
    }

    TreeNode* deserializeHelper(string &data, int &i){
        if(data[i] == '#'){
            i += 2;
            return nullptr;

        }
        int sign = 1;
        if(data[i] == '-'){
            sign = -1;
            i++;
        }

        int num = 0;
        while(data[i] != ','){
            num = num* 10 + (data[i] - '0');
            i++;
        }
        i++;

        TreeNode* root = new TreeNode(sign * num);

        root->left = deserializeHelper(data, i);
        root->right = deserializeHelper(data, i);

        return root;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        int i = 0;
        return deserializeHelper(data, i);
    }



};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));