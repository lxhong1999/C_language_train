#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int val;
    struct Node *next;
} Node;

void enqueue(Node ** head, Node ** tail, int data){
    Node *newnode = (Node *) malloc (sizeof(Node));
    newnode-> val = data;
    newnode-> next = NULL;
    if (*tail != NULL) (*tail)->next = newnode;
    *tail = newnode;
    if (*head == NULL) *head = *tail;
}

int dequeue(Node **head){
    if (*head == NULL) return -1;
    Node *temp = *head;
    int num = temp->val;
    *head = (*head)->next;

    free(temp);
    return num;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;
    
    // 模擬佇列操作
    enqueue(&head, &tail, 10);
    enqueue(&head, &tail, 20);
    enqueue(&head, &tail, 30);
    
    printf("出佇列: %d\n", dequeue(&head));
    printf("出佇列: %d\n", dequeue(&head));
    
    return 0;
}