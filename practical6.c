#include <stdio.h>
#include <stdlib.h>

// Definition of a node in the linked list
struct Node {
    int data;
    struct Node *next;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to print the linked list
void printList(struct Node* head) {
    struct Node* current = head;
    printf("Linked List: ");
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

// Function to append a node at the end of the list
void appendNode(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;  // If the list is empty, make newNode the head
    } else {
        struct Node* current = *head;
        while (current->next != NULL) {
            current = current->next;  // Traverse to the last node
        }
        current->next = newNode;  // Link the last node to newNode
    }
}

// Main function to create and display the list
int main() {
    struct Node* head = NULL;

    // Creating a linked list with 5 elements
    appendNode(&head, 10);
    appendNode(&head, 20);
    appendNode(&head, 30);
    appendNode(&head, 40);
    appendNode(&head, 50);
    appendNode(&head, 60);
    
    // Printing the linked list
    printList(head);

    return 0;
}
