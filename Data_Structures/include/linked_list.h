#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct listNode listNode;
typedef struct LinkedList LinkedList;

typedef struct listNode {
    void *data;
    listNode *next;
} listNode;

typedef struct LinkedList { 
    listNode *head;
    listNode *first;
    size_t size;
} LinkedList;

LinkedList * initList();
listNode * initNode(void *data);

//append
void append(LinkedList * list, void *data);
void * peek(LinkedList * p_list);
//size
//int size(LinkedList * List);
//pop (opt. arg. index)
void * pop(LinkedList * p_list, size_t data_size);
void destroy(LinkedList * p_list);
//empty/destroy free every node, set head to void*

