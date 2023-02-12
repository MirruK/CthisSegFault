#include "./../include/binary_tree.h"

TreeNode * initNode(size_t data){
    TreeNode *p_Node = malloc(sizeof(TreeNode));
    p_Node->data = data;
    p_Node->left = NULL;
    p_Node->right = NULL;
    return p_Node;
}
BinaryTree * initTree(){
    BinaryTree *p_Tree = malloc(sizeof(BinaryTree));
    p_Tree->root = NULL;
    p_Tree->depth = 0;
}

void add(BinaryTree * p_Tree, size_t data){
    if(p_Tree->depth == 0){
        p_Tree->root = initNode(data);
        p_Tree->depth += 1;
        return;
    }
    TreeNode *curr = p_Tree->root;

    while(1){
        if(curr->data < data){
            if(!curr->right){
                curr->right = initNode(data);
                return;
            }
            else{curr = curr->right;}
        }
        else{
            if(!curr->left){
                curr->left = initNode(data);
                return;
            }
            else{curr = curr->left;}
        }
    }
}

// (*TreeNode)[] BFS(BinaryTree * p_Tree, size_t value){
//     if (!value){
//
//         // No search value specified, traverse whole tree
//         return;
//     }
//     else {
//         // Desired value specified, return when found
//         return;
//     }
// }
//TreeNode * find(BinaryTree * p_Tree, size_t data);

// Pass in the tree's root node
void traverse(TreeNode * p_Node){
    // (*TreeNode)[] nodes = BFS(p_Tree, NULL);
    // size_t arr_length = sizeof(nodes) / sizeof(TreeNode);
    // for (int i = 0; i < arr_length; i++){
    //     printf("Node #%d, val: %d\n", i, nodes[i]->data);
    // }
    if (p_Node->left){
        traverse(p_Node->left);
    }
    printf("Node value: %d\n", p_Node->data);
    if (p_Node->right){
        traverse(p_Node->right);
    }
}
