#include "../include/linked_list.h"



listNode * initNode(void *inp_data){
    listNode *p_Node = (listNode*) malloc(sizeof(listNode));
    p_Node->data = inp_data; 
    p_Node->next = (listNode*)NULL;
    return p_Node;
}

LinkedList * initList(){
    LinkedList *p_list = (LinkedList*) malloc(sizeof(LinkedList));
    p_list->first = NULL;
    p_list->head = p_list->first;
    p_list->size = 0;
    return p_list;
}

void * peek(LinkedList * p_list){ 
    return p_list->head;
}

void append(LinkedList* p_list, void * data){
    listNode * p_Node = initNode(data);
    if (p_list->size == 0) {
        p_list->first = p_Node;
        p_list->head = p_Node;
        p_list->size++;
        return;
    }
    p_list->head->next = p_Node;
    p_list->head = p_Node;
    p_list->size++;
};

void * pop(LinkedList* p_list, size_t data_size){
    if(p_list->size == 1){
        void * data_cpy = malloc(data_size);
        memcpy(data_cpy, p_list->first->data, data_size);
        p_list->size--;
        free(p_list->first);
        return data_cpy;
    }
    listNode * curr = p_list->first;
    listNode * next = p_list->first->next;
    // printf("Val of first next: %d\n", *(int*)(next->data));
    for (int i=0; i < p_list->size; i++){
        if(i == p_list->size-2){
            // printf("found last node at next next, popping \"next\": %d\n", *(int*)(curr->next->data));
            void * data_cpy = malloc(data_size);
            memcpy(data_cpy, curr->next->data, data_size);
            next = curr->next;
            p_list->size--;
            p_list->head = curr;
            free(next);
            return data_cpy;
        }
        curr = curr->next;
    }
}

void destroy(LinkedList * list){
    while(list->size>0){
        // printf("List head value: %d\n", *(int*)(list->head->data));
        // printf("Current size: %d\n", list->size);
        pop(list, sizeof(int));
    }
    free(list);
    printf("List memory deallocated");
}

