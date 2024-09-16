#include <stdio.h>
#include <stdlib.h>

struct Node {
    char data;
    struct Node* prev;
    struct Node* next;
};

struct Node* createNode(char data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

struct node* removeCharacter(struct Node* head, char key) {
    struct Node* temp = head;

    while(temp && temp->data != key){
        temp = temp->next;
    }
    if(temp == NULL){
        printf("Character '%c' not found in the list.\n", key);
        return head;
    }

    // If the node to be deleted is the head node
    if (temp == head) {
        head = temp->next;
    }

    // Change the next pointer of the previous node if it exists
    if (temp->prev != NULL) {
        temp->prev->next = temp->next;
    }
    // Change the prev pointer of the next node if it exists
    if (temp->next != NULL) {
        temp->next->prev = temp->prev;
    }

    // Free memory
    free(temp);
    printf("Character '%c' removed from the list.\n", key);
    return head;
}


void printList(struct Node* node) {
    while (node != NULL) {
        printf("%c ", node->data);
        node = node->next;
    }
    printf("\n");
}


int main() {
    struct Node* head = createNode('a');
    head->next = createNode('b');
    head->next->prev = head;
    head->next->next = createNode('c');
    head->next->next->prev = head->next;
    head->next->next->next = createNode('d');
    head->next->next->next->prev = head->next->next;

    printf("Original list: ");
    printList(head);

    head = removeCharacter(head, 'b');

    printf("Updated list: ");
    printList(head);

    return 0;
}
