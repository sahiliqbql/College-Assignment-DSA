#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int val;
    struct node* next;
}node;

node* merge(node* head1,node* head2){
    if(head1==NULL) return head2;
    if(head2==NULL) return head1;
    node* m = NULL;
    if(head1->val<head2->val){
        m = head1;
        while(head1->next){
            head1 = head1->next;
        }
        head1->next = head2;
    }else{
        m = head2;
        while(head2->next){
            head2 = head2->next;
        }
        head2->next = head1;
    }
    return m;
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
    node* head1 = (node*)malloc(sizeof(node));
    head1->val = 1;
    head1->next = (node*)malloc(sizeof(node));
    head1->next->val = 2;
    head1->next->next = (node*)malloc(sizeof(node));
    head1->next->next->val = 3;
    head1->next->next->next = NULL;

    node* head2 = (node*)malloc(sizeof(node));
    head2->val = 4;
    head2->next = (node*)malloc(sizeof(node));
    head2->next->val = 5;
    head2->next->next = (node*)malloc(sizeof(node));
    head2->next->next->val = 6;
    head2->next->next->next = NULL;

    node* mergrll = merge(head1,head2);
    traversal(mergrll);

    return 0;
}


//OUTPUT:

// 1 --> 2 --> 3 --> 4 --> 5 --> 6 --> NULL
