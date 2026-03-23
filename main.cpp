void preorder(Node* root) {
    if (root == nullptr) return;

    cout << root->data << " ";   // 先處理自己
    preorder(root->left);        // 再左
    preorder(root->right);       // 再右
}

void inorder(Node* root) {
    if (root == nullptr) return;

    inorder(root->left);         // 先左
    cout << root->data << " ";   // 再自己
    inorder(root->right);        // 再右
}

void postorder(Node* root) {
    if (root == nullptr) return;

    postorder(root->left);       // 左
    postorder(root->right);      // 右
    cout << root->data << " ";   // 最後自己
}
