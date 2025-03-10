#include <stdio.h>
#include <stdlib.h>

// Definition of a node in the binary tree
struct Node {
    int data;
    struct Node *left;
    struct Node *right;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Function to insert a node into the binary search tree
struct Node* insert(struct Node* root, int data) {
    if (root == NULL) {
        // If the tree is empty, create the root node
        return createNode(data);
    }

    // If the data is less than the root, insert in the left subtree
    if (data < root->data) {
        root->left = insert(root->left, data);
    }
    // If the data is greater than the root, insert in the right subtree
    else {
        root->right = insert(root->right, data);
    }
    return root;
}

// Function to perform pre-order traversal of the binary tree
void preorderTraversal(struct Node* root) {
    if (root != NULL) {
        printf("%d ", root->data);         // Visit the node
        preorderTraversal(root->left);     // Traverse the left subtree
        preorderTraversal(root->right);    // Traverse the right subtree
    }
}

// Main function
int main() {
    struct Node* root = NULL;  // Initially, the tree is empty

    // Inserting nodes into the binary search tree
    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 70);
    root = insert(root, 60);
    root = insert(root, 80);

    // Perform pre-order traversal and print the tree
    printf("Pre-order traversal of the binary tree: \n");
    preorderTraversal(root);

    return 0;
}
