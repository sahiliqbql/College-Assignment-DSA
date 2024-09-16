#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    struct node* prev;
    int val;
    struct node* next;
}node;

void traversal(node* head){
    node* ptr = head;
    printf("<-->");
    do{
        printf(" %d ",ptr->val);
        ptr = ptr->next;
        if(ptr){
            printf("<-->");
        }
    }while(ptr!=head);
    printf("\n");
}

node* insertion(node* head,int val,int pos){
    node* nn = (node*)malloc(sizeof(node));
    nn->val = val;
    nn->prev = NULL;
    nn->next = NULL;

    node* ptr = head;
    if(pos==1){
        while(ptr->next!=head){
            ptr = ptr->next;
        }
        ptr->next = nn;
        nn->prev = ptr;
        nn->next = head;
        head->prev = nn;
        return nn;
    }
    for(int i=2; ptr->next!=head && i<pos; i++){
        ptr = ptr->next;
    }
    nn->next = ptr->next;
    ptr->next->prev = nn;
    ptr->next = nn;
    nn->prev = ptr;

    return head;
}

node* deletion(node* head,int pos){
    node* ptr = head;
    if(pos==1){
        while(ptr->next!=head){
            ptr = ptr->next;
        }
        ptr->next = ptr->next->next;
        ptr->next->prev = ptr;

        head->prev = NULL;
        head->next = NULL;
        free(head);
        return ptr->next;
    }
    for(int i=2; ptr->next!=NULL && i<pos; i++){
        ptr = ptr->next;
    }
    node* temp = ptr->next;
    
    ptr->next = ptr->next->next;
    ptr->next->prev = ptr; 

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

    head->prev = four;
    head->next = snd;

    snd->prev = head;
    snd->next = trd;
    
    trd->prev = snd;
    trd->next = four;

    four->prev = trd;
    four->next = head;

    head = insertion(head,99,4);
    traversal(head);

    head = deletion(head,4);
    traversal(head);

    return 0;
}
