void postorder (node){
    if(node == null ){
        return
    }
    postorder(node-> left)
    postorder(node0-> right)
    print(node -> data)
}