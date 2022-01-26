class Solution {
public:
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        if(root1 == NULL && root2 == NULL) {
            return NULL;
        }
        
        int val1 = root1 != NULL ? root1->val : 0;
        int val2 = root2 != NULL ? root2->val : 0;
        TreeNode* head = new TreeNode(val1 + val2);
        
        head->left = mergeTrees(root1 ? root1->left : NULL, root2 ? root2->left : NULL);
        head->right = mergeTrees(root1 ? root1->right : NULL, root2 ? root2->right :             NULL);
        
        return head;
    }
};
