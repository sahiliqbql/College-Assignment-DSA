#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    struct node* prev;
    int val;
    struct node* next;
}node;

void traversal(node* head){
    node* ptr = head;
    printf("NULL <--");
    while(ptr){
        printf(" %d ",ptr->val);
        ptr = ptr->next;
        if(ptr){
            printf("<-->");
        }
    }
    printf("--> NULL\n");
}

node* insertion(node* head,int val,int pos){
    node* nn = (node*)malloc(sizeof(node));
    nn->val = val;
    nn->prev = NULL;
    nn->next = NULL;

    node* ptr = head;
    if(pos==1){
        ptr->prev = nn;
        nn->next = ptr;
        return nn;
    }
    for(int i=2; ptr->next!=NULL && i<pos; i++){
        ptr = ptr->next;
    }
    nn->next = ptr->next;
    nn->prev = ptr;
    ptr->next = nn;
    return head;
}

node* deletion(node* head,int pos){
    node* ptr = head;
    if(pos==1){
        ptr = head->next;
        ptr->prev = NULL;
        head->next = NULL;
        free(head);
        return ptr;
    }
    for(int i=2; ptr->next!=NULL && i<pos; i++){
        ptr = ptr->next;
    }
    node* temp = ptr->next;
    if (temp == NULL) { // if temp is the last node
        ptr->next = NULL;
    } else {
        ptr->next = temp->next;
        if (temp->next != NULL) {
            temp->next->prev = ptr;
        }
    }
    temp->next = NULL;
    temp->prev = NULL;
    free(temp);
    return head;
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

    head = insertion(head,99,5);
    traversal(head);

    head = deletion(head,3);
    traversal(head);

    return 0;
}
