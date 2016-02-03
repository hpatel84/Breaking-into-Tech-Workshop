void Inorder(node *root) {
    if (root ==NULL)
        return;
    
    Inorder(root->left);
    cout<<*root<<' ';
    Inorder(root->right);
    
    return;
}
