#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int val;
    struct node* next;
}node;

int main(){
    node* head = (node*)malloc(sizeof(node));
    node* snd = (node*)malloc(sizeof(node));
    node* trd = (node*)malloc(sizeof(node));

    head->val = 1;
    head->next = snd;
    snd->val = 2;
    snd->next = trd;
    trd->val = 3;
    trd->next = NULL;

    node* ptr = head;
    while(ptr){
        printf("%d --> ",ptr->val);
        ptr = ptr->next;
    }
    printf("NULL\n");

    return 0;
}


//OUTPUT:

// 1 --> 2 --> 3 --> NULL
