// 2->4->7->8->9
// K=3
// 8->9->2->4->7

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

node* leftShift(node* head, int k){
    node* last = head;
    while(last->next){
        last = last->next;
    }
    last->next = head;

    node* curr = head;
    node* prev = head;
    for(int i=0; i<k; i++){
        prev = curr;
        curr = curr->next;
    }
    prev->next = NULL;
    return curr;
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
    node* head = createNode(2);
    push(head,4);
    push(head,7);
    push(head,8);
    push(head,9);
    traversal(head);

    int k;
    printf("enter k: ");
    scanf("%d",&k);

    head = leftShift(head,k);
    traversal(head);
    
    return 0;
}


//OUTPUT:

// 2 --> 4 --> 7 --> 8 --> 9 --> NULL

