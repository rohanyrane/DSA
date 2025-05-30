void inorder ( node ) {
    if (node == null) { 
        return;
    }
    inorder(node -> left)
    print(node -> data)
    inorder(node -> right)
}