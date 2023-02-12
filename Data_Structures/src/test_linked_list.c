#include "../include/linked_list.h"

int main(){
    LinkedList * test_list = initList();
    printf("Ran init.\n list_ptr: %p\n", test_list);
    int newdata = 40;
    int newdata2= 50;
    int newdata3= 30;
    append(test_list, &newdata);
    printf("Ran append.\nHead: %d\n", *(int*)(test_list->head->data));
    append(test_list, &newdata2);
    printf("Ran append.\nHead: %d\n", *(int*)(test_list->head->data));
    append(test_list, &newdata3);
    printf("Ran append.\nHead: %d\n", *(int*)(test_list->head->data));
    void * popped = pop(test_list, sizeof(int));
    printf("Popped item with val: %d\n", *(int*)popped);
    printf("New Head: %d\n", *(int*)(test_list->head->data));
    popped = pop(test_list, sizeof(int));
    printf("Popped item with val: %d\n", *(int*)popped);
    destroy(test_list);
    return 0;
}
