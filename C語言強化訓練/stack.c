#include <stdio.h>
#include <stdlib.h>

struct stack{
    int num;
    struct stack *s;
};

void push(struct stack **l, int newdata){
    struct stack *newlevel = (struct stack*) malloc (sizeof(struct stack));
    newlevel->num = newdata;
    newlevel->s = *l;
    *l = newlevel; 
}

int pop(struct stack **l){
    if (*l == NULL) {
        printf("堆疊是空的\n");
        return -1;
    }
    struct stack* temp = *l;
    int popped = temp->num;
    *l = (*l)->s;
    free(temp);
    return popped;
}

int main() {
    struct stack* s = NULL;
    
    // 模擬堆疊操作
    push(&s, 10);
    push(&s, 20);
    push(&s, 30);
    
    printf("彈出: %d\n", pop(&s));
    printf("彈出: %d\n", pop(&s));
    
    return 0;
}