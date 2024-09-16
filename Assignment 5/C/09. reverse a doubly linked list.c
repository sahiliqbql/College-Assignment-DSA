// tips: just change the value in a reverse manner 
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

void reverse(node* head){
    int s = 0;
    node* ptr = head;
    while(ptr->next){
        s++;
        ptr = ptr->next;
    }
    node* str = head;
    int i=0;
    int j=s+1;
    while(i<j){
        int t = ptr->val;
        ptr->val = str->val;
        str->val = t;
        str = str->next;
        ptr = ptr->prev;
        i++;
        j--;
    }
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

    printf("before: ");
    traversal(head);

    printf("after: ");
    reverse(head);
    traversal(head);

    return 0;
}

