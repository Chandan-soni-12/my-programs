#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;               
    struct Node *next;      
    struct Node *prev;      
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        exit(1); 
    }
    newNode->data = data;   
    newNode->next = NULL;   
    newNode->prev = NULL;   
    return newNode;
}

void printList(struct Node* head) {
    struct Node* temp = head;
    printf("Forward Traversal: ");
 while (temp != NULL) {
        printf("%d ", temp->data); 
        if (temp->next == NULL) {
            break;  
        }
        temp = temp->next;  
    }
    printf("\n");

    printf("Reverse Traversal: ");
    while (temp != NULL) {
        printf("%d ", temp->data); 
        temp = temp->prev;         
    }
    printf("\n");
}

void freeList(struct Node* head) {
    struct Node* temp;
    while (head != NULL) {
        temp = head;         
        head = head->next;   
        free(temp);         
    }
}

int main() {
    struct Node* node1 = createNode(10);  
    struct Node* node2 = createNode(20);  
    struct Node* node3 = createNode(30); 

    node1->next = node2;
    node2->prev = node1;
    node2->next = node3;
    node3->prev = node2;

    printList(node1);

    freeList(node1);

    return 0;
}