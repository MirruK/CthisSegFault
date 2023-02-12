#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct TreeNode TreeNode;
typedef struct BinaryTree BinaryTree;

typedef struct TreeNode{
    size_t data;
    TreeNode * left;
    TreeNode * right;
}TreeNode;

typedef struct BinaryTree{
    TreeNode * root;
    int depth;
}BinaryTree;

TreeNode * initNode(size_t data);
BinaryTree * initTree();

void add(BinaryTree * p_tree, size_t data);
TreeNode * find(BinaryTree * p_tree, size_t data);
void traverse(TreeNode * p_Node);
//TreeNode[] BFS(BinaryTree * p_Tree, size_t value);
