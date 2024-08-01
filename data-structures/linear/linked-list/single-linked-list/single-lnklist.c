#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//creating the basic block of linked list node
typedef struct Block{
    int data;
    struct Block* next;
}node;
