#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int val;
    struct node* next;
}node;

node* createNode(int n){
    node* t = (node*)malloc(sizeof(node));
    t->val = n;
    t->next = NULL;
    return t;
}

void push(node* head,int n){
    node* t = (node*)malloc(sizeof(node));
    if(t==NULL){
        printf("no space for %d",n);
        return;
    }
    t->val = n;
    t->next = NULL;
    while(head->next){
        head = head->next;
    }
    head->next = t;
}

node* reverse(node* head){
    node* prev = NULL;
    node* curr = head;
    node* next = NULL;
    
    while(curr){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
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
    node* head = createNode(1);
    push(head,2);
    push(head,3);
    push(head,4);
    push(head,5);
    traversal(head);

    head = reverse(head);
    traversal(head);
    
    return 0;
}


//OUTPUT:

// 1 --> 2 --> 3 --> 4 --> 5 --> NULL
// 5 --> 4 --> 3 --> 2 --> 1 --> NULL
