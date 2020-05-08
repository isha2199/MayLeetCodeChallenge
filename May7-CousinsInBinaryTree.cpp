class Solution {
public:
    void dfs(TreeNode* root, int depth[], int parent[]){
        if(root->left){
            parent[root->left->val] = root->val;
            depth[root->left->val] = depth[root->val] + 1;
            dfs(root->left, depth, parent);
        }
        if(root->right){
            parent[root->right->val] = root->val;
            depth[root->right->val] = depth[root->val] + 1;
            dfs(root->right, depth, parent);
        }
    }
    
    bool isCousins(TreeNode* root, int x, int y) {
        int parent[101], depth[101];
        depth[root->val] = 0;
        parent[root->val] = -1;
        dfs(root, depth, parent);
        if(depth[x]==depth[y] && parent[x]!=parent[y])
            return true;
        return false;
    }
};
