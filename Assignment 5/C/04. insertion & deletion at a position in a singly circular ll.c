#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int val;
    struct node* next;
}node;

void traversal(node* head){
    node* ptr = head;
    do{
        printf("--> %d ",ptr->val);
        ptr = ptr->next;
    }while(ptr!=head);
    printf("--\n");
}

node* insertion(node* head,int val,int pos){
    node* nn = (node*)malloc(sizeof(node));
    nn->val = val;
    node* ptr = head;
    if(pos==1){
        while(ptr->next!=head){
            ptr = ptr->next;
        }
        ptr->next = nn;
        nn->next = head;
        return nn;
    }
    for(int i=2; i<pos; i++){
        ptr = ptr->next;
    }
    nn->next = ptr->next;
    ptr->next = nn;
    return head;
}

node* deletion(node* head,int pos){
    node* ptr = head;
    if(pos==1){
        while(ptr->next!=head){
            ptr = ptr->next;
        }
        ptr->next = head->next;
        head->next = NULL;
        free(head);
        return ptr->next;
    }
    for(int i=2; i<pos; i++){
        ptr = ptr->next;
    }
    node* temp = ptr->next;
    ptr->next = ptr->next->next;
    temp->next = NULL;
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

    head->next = snd;
    snd->next = trd;
    trd->next = four;
    four->next = head;

    head = insertion(head,99,1);
    traversal(head);

    head = deletion(head,3);
    traversal(head);

    return 0;
}
