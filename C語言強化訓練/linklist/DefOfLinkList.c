#include <stdio.h>
#include <stdlib.h>

struct Node {
    int n;
    struct Node* next;
};

void insert(struct Node** head, int newdata){
    struct Node* NewNode = (struct Node*) malloc (sizeof(struct Node));
    NewNode -> n = newdata;
    NewNode -> next = *head;
    (*head) = NewNode;
}

int main(){
    struct Node *first=NULL;
    struct Node *Print;
    for (int i = 1; i <5; i++) {insert(&first, i);}
    Print = first;
    while (Print!=NULL){
        printf("%d\n",Print->n);
        Print = Print->next;
    }
    return 0;
}
