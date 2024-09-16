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
    node* four = (node*)malloc(sizeof(node));

    head->val = 1;
    snd->val = 2;
    trd->val = 3;
    four->val = 4;

    head->next = snd;
    snd->next = trd;
    trd->next = four;
    four->next = head;

    node* ptr = head;
    do{
        printf("--> %d ",ptr->val);
        ptr = ptr->next;
    }while(ptr!=head);
    printf("--\n");

    return 0;
}
