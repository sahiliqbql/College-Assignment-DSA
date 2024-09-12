#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int val;
    struct node* next;
}node;

void insertion(node* head,int n){
    node* nn = (node*)malloc(sizeof(node));
    if(nn==NULL){
        printf("no space for %d",n);
        return;
    }
    nn->val = n;
    nn->next = NULL;
    node* ptr=head;
    while(ptr->next){
        ptr = ptr->next;
    }
    ptr->next = nn;
}

void deletion(node* head,int n){
    node* curr = head;
    node* prev = head;
    while(curr->val!=n){
        prev = curr;
        curr = curr->next;
    }
    prev->next = curr->next;
    curr->next = NULL;
    free(curr);
}

void traversal(node* head){
    node* ptr = head;
    while(ptr){
        printf("%d --> ",ptr->val);
        ptr = ptr->next;
    }
    printf("NULL\n");
}

int main(){
    node* head = (node*)malloc(sizeof(node));
    head->val = 1;
    head->next = NULL;

    insertion(head,2);
    insertion(head,3);
    insertion(head,4);

    deletion(head,3);

    traversal(head);
    return 0;
}


//OUTPUT:

// 1 --> 2 --> 4 --> NULL
