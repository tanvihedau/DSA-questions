class Solution {
    void inorder(Node* root, vector<int>& vals) {
        if (!root) return;
        inorder(root->left, vals);
        vals.push_back(root->data);
        inorder(root->right, vals);
    }
public:
    bool isBST(Node* root) {
        vector<int> vals;
        inorder(root, vals);
        for (int i = 1; i < vals.size(); i++) {
            if (vals[i] <= vals[i-1]) return false;
        }
        return true;
    }
};
