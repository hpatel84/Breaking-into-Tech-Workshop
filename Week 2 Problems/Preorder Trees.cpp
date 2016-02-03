void Preorder(node *root) {
    if (root ==NULL)
        return;
    
    cout<<*root<<' ';
    Preorder(root->left);
    Preorder(root->right);
    
    return;
}