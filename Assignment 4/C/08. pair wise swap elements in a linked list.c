// input : 1 2 3 4
// output: 2 1 4 3
// trick - just swap tha values :)
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

node* swap(node* head){
    node* temp = head;
    while(temp && temp->next){
        int k = temp->val;
        temp->val = temp->next->val;
        temp->next->val = k;

        temp = temp->next->next;
    }
    return head;
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
    int n;
    printf("no of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter %d value: ",n);
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    node* head = createNode(arr[0]);
    for(int i=1; i<n; i++){
        push(head,arr[i]);
    }
    traversal(head);

    swap(head);
    traversal(head);

    return 0;
}


//OUTPUT:

// no of elements: 4
// enter 4 value: 1 2 3 4
// 1 --> 2 --> 3 --> 4 --> NULL
// 2 --> 1 --> 4 --> 3 --> NULL
