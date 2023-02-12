#include "./../include/binary_tree.h"

int main(){
    BinaryTree * test_tree = initTree();
    test_tree->root = initNode(100);
    add(test_tree, 50);
    add(test_tree, 98);
    add(test_tree, 45);
    add(test_tree, 30);
    add(test_tree, 35);
    traverse(test_tree->root);
}
