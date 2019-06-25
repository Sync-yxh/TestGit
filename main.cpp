vector<int> postorderTraversal(TreeNode* root) {
    stack<TreeNode*> stk;
    vector<int> result;
    if(root==NULL)
        return result;
    TreeNode* now = root;
    TreeNode* last = NULL;
    while(now != NULL)
    {
        stk.push(now);
    }
    while(!stk.empty())
    {
        now = stk.top();
        if(now->right != NULL && now->right != last)
        {
            now = now->right;
            while(now != NULL)
            {
                stk.push(now);
                now = now->left;
            }
        }
        else
        {
            result.push_back(now->val);
            last = now;
            stk.pop();
        }
    }
    return result;
    //new line
}
