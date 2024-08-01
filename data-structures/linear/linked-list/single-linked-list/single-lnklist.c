#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//creating the basic block of linked list node
typedef struct Block{
    int data;
    struct Block* next;
}node;


node* createNode(int data); //function to create list node


int main(){

    
    return 0;
}

node* createNode(int data){
    node* new_node = (node*)malloc(sizeof(node));
    new_node->data = data;
    new_node->next = NULL;

    return new_node;
}