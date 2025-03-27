// Write a program in ‘C’ to create a queue containing ten elements and perform delete and insert operations using array

#include <stdio.h>
#include <stdlib.h>

#define MAX 10  // Size of the queue

// Define the queue structure
struct Queue {
    int arr[MAX];
    int front;
    int rear;
};

// Function to initialize the queue
void initQueue(struct Queue *q) {
    q->front = -1;
    q->rear = -1;
}

// Function to check if the queue is full
int isFull(struct Queue *q) {
    return q->rear == MAX - 1;
}

// Function to check if the queue is empty
int isEmpty(struct Queue *q) {
    return q->front == -1;
}

// Function to insert an element into the queue (enqueue)
void enqueue(struct Queue *q, int value) {
    if (isFull(q)) {
        printf("Queue is full. Cannot insert %d\n", value);
    } else {
        if (q->front == -1) {
            q->front = 0;  // Set front to 0 when the first element is inserted
        }
        q->rear++;
        q->arr[q->rear] = value;
        printf("Inserted %d into the queue\n", value);
    }
}

// Function to delete an element from the queue (dequeue)
void dequeue(struct Queue *q) {
    if (isEmpty(q)) {
        printf("Queue is empty. Cannot perform dequeue\n");
    } else {
        printf("Deleted %d from the queue\n", q->arr[q->front]);
        q->front++;
        
        // Reset the queue when it becomes empty
        if (q->front > q->rear) {
            q->front = q->rear = -1;
        }
    }
}

// Function to display the elements of the queue
void displayQueue(struct Queue *q) {
    if (isEmpty(q)) {
        printf("Queue is empty\n");
    } else {
        printf("Queue elements: ");
        for (int i = q->front; i <= q->rear; i++) {
            printf("%d ", q->arr[i]);
        }
        printf("\n");
    }
}

int main() {
    struct Queue q;
    initQueue(&q);
    
    // Insert some elements into the queue
    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);
    enqueue(&q, 40);
    enqueue(&q, 50);
    enqueue(&q, 60);
    enqueue(&q, 70);
    enqueue(&q, 80);
    enqueue(&q, 90);
    enqueue(&q, 100);  // This should be inserted successfully
    
    displayQueue(&q);
    
    // Perform some dequeue operations
    dequeue(&q);
    dequeue(&q);
    
    displayQueue(&q);
    
    // Insert more elements to check if the queue works after deletion
    enqueue(&q, 110);
    enqueue(&q, 120);
    
    displayQueue(&q);
    
    return 0;
}
