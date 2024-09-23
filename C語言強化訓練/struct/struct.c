// 未完成

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int num;
    node *next;
} node;

void insert(node **head, int newdata){
    node *newNode = (node *) malloc (sizeof(node));
    newNode->num = newdata;
    newNode->next = *head;
    *head = newNode;
}

int main(){
    node *s = NULL;
    insert(&s, 10);
    return 0;
}