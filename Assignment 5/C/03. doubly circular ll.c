#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    struct node* prev;
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

    head->prev = four;
    head->next = snd;

    snd->prev = head;
    snd->next = trd;
    
    trd->prev = snd;
    trd->next = four;

    four->prev = trd;
    four->next = head;

    node* ptr = head;
    printf("<-->");
    do{
        printf(" %d ",ptr->val);
        ptr = ptr->next;
        if(ptr){
            printf("<-->");
        }
    }while(ptr!=head);

    return 0;
}
