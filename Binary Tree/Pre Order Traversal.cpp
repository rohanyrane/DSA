void preorder( node ) {
    if ( node == null )
        return;

        print(node -> data)
        preorder(node -> left)
        preorder(node -> right)
}


TC : O(N)
SC : O(N)