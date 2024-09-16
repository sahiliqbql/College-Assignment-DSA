#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int val;
    struct node* left;
    struct node* right;
}node;

node* createNode(int n){
    node* cn = (node*)malloc(sizeof(node));
    cn->val = n;
    cn->left = NULL;
    cn->right = NULL;
    return cn;
}

void inOrderTrav(node* head){
    if(head==NULL){
        return;
    }
    inOrderTrav(head->left);
    printf("%d ",head->val);
    inOrderTrav(head->right);
}

int main(){
    node* head = createNode(1);
    node* snd = createNode(2);
    node* trd = createNode(3);
    node* four = createNode(4);
    node* five = createNode(5);
    
    head->left = snd;
    head->right = trd;

    snd->left = four;
    snd->right = five;

/*      1
       / \
      2   3
     / \
    4   5         */
    inOrderTrav(head);

    return 0;
}
