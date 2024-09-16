// input: 1->2->3->4->5->6
// Output:3->2->1->6->5->4

#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    struct node* prev;
    int val;
    struct node* next;
}node;

void traversal(node* head){
    node* ptr = head;
    while(ptr){
        printf("%d ",ptr->val);
        ptr = ptr->next;
    }
    printf("\n");
}

void dividePrint(node* head){
    int s = 0;
    node* ptr = head;
    while(ptr){
        s++;
        ptr = ptr->next;
    }
    ptr = head;
    for(int i=1; i<s/2; i++){
        ptr = ptr->next;
    }
    node* snd = ptr->next;
    ptr->next = NULL;
    snd->prev = NULL;
    while(snd->next){
        snd = snd->next;
    }
    snd->next = head;
    head->prev = snd;

    while(ptr){
        printf("%d ",ptr->val);
        ptr = ptr->prev;
    }
    printf("\n");
}

int main(){
    node* head = (node*)malloc(sizeof(node));
    node* snd = (node*)malloc(sizeof(node));
    node* trd = (node*)malloc(sizeof(node));
    node* four = (node*)malloc(sizeof(node));

    head->val = 1;
    snd->val = 2;
    trd->val = 3;
    four->val = 4;

    head->prev = NULL;
    head->next = snd;

    snd->prev = head;
    snd->next = trd;
    
    trd->prev = snd;
    trd->next = four;

    four->prev = trd;
    four->next = NULL;

    traversal(head);
    dividePrint(head);

    return 0;
}
