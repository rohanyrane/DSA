struct Node{
    int data;
    struct Node* left;
    strcut Node* right;

    Node( int val) {
        data = val;
        left = right = null;
    }
}

main(){
    struct Node* root = new Node (1);
    root->left = new Node(2);
    root->right = new Node (3);
    root->left->right = new Node(5)
}




// Structure ==> 

        1
      /   \
    2       3
      \
        5