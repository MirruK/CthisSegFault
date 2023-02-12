#include <stdlib.h>
#include <stdio.h>

typedef struct TestType {
    int * attribute1;
}TestType;

int main(){
    TestType *my_obj = malloc(sizeof(TestType));
    my_obj->attribute1 = 1;
    printf("Will it segfault??\nptr: %p\nptr val: illegal to check", my_obj->attribute1);
    printf("Is attr1 == NULL: %s\n", my_obj->attribute1 == NULL ? "true" : "false");
    printf("NULL represented as a string: %s,\nas a digit: %d,\nas a ptr: %p\n", NULL, NULL, NULL);
    printf("typeof called on NULL formatted as a string yields: \nsizeof yields: %p\n", sizeof((void*)NULL));
}
