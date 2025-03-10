#include <stdio.h>
#include <stdlib.h>

// Definition of a node in the linked list
struct Node {
    int data;
    struct Node* next;
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

// Function to delete the first node with a specific value
void deleteFirstNode(struct Node** head, int value) {
    if (*head == NULL) {
        printf("The list is empty, nothing to delete.\n");
        return;
    }

    struct Node* current = *head;  
    struct Node* previous = NULL;

    // If the head node contains th e value to be deleted
    if (current != NULL && current->data == value) {
        *head = current->next;  // Move the head to the next node
        free(current);  // Free the memory of the deleted node
        return;
    }

    // Search for the node to delete
    while (current != NULL && current->data != value) {
        previous = current;
        current = current->next;
    }

    // If the node was not found
    if (current == NULL) {
        printf("Value %d not found in the list.\n", value);
        return;
    }

    // Unlink the node from the list
    previous->next = current->next;
    free(current);  // Free the memory of the deleted node
}

// Main function
int main() {
    struct Node* head = NULL;

    // Creating a linked list with 5 elements
    appendNode(&head, 10);
    appendNode(&head, 20);
    appendNode(&head, 30);
    appendNode(&head, 40);
    appendNode(&head, 50);

    // Print the list before deletion
    printf("Before deletion:\n");
    printList(head);

    // Delete the first node containing the value 30
    int valueToDelete = 30;
    deleteFirstNode(&head, valueToDelete);

    // Print the list after deletion
    printf("\nAfter deleting the first node with value %d:\n", valueToDelete);
    printList(head);

    return 0;
}
