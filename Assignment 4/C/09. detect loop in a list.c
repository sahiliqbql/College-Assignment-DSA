#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

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

bool isLoop(node* head){
    node* slow = head;
    node* fast = head;
    while(fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;
        if(slow==fast){
            return true;
        }
    }
    return false;
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
    node* snd = createNode(2);
    node* trd = createNode(3);
    node* four = createNode(4);

    head->next = snd;
    snd->next = trd;
    trd->next = four;
    four->next = snd;  // loop
    
    if(isLoop(head)){
        printf("loop found");
    }else{
        printf("no loop\n");
        traversal(head);
    }
    
    return 0;
}


//OUTPUT:

// loop found
