#include <stdio.h> 
#include <stdlib.h> 
#define MAX 100 
struct Queue { 
int arr[MAX]; 
int front; 
int rear; 
}; 
// Function prototypes 
void initializeQueue(struct Queue *queue){ 
queue->front =-1; 
queue->rear=-1; 
} 
int isFull(struct Queue *queue){ 
return queue->rear==MAX-1; 
} 
int isEmpty(struct Queue *queue){ 
return queue->front==-1||queue->front>queue->rear; 
} 
void enqueue(struct Queue *queue, int element){ 
if(isFull(queue)){ 
printf("queue overflow\n"); 
return;} 
if(queue->front==-1) 
queue->front =0; 
queue->rear++; 
queue->arr[queue->rear]=element; 
printf("%d insert into queue\n",element); 
} 
int dequeue(struct Queue *queue){ 
if(isEmpty(queue)){ 
printf("queue underflow\n"); 
return -1; 
} 
int element=queue->arr[queue->front]; 
queue->front++; 
if(queue->front>queue->rear) 
{ 
queue->front=-1; 
queue->rear=-1; 
} 
return element; 
} 
void displayQueue(struct Queue *queue){ 
int i; 
if(isEmpty(queue)){ 
printf("queue is empty.\n"); 
return ; 
} 
printf("queue elements: "); 
for(i =queue->front;i<=queue->rear;i++){ 



printf("%d ",queue->arr[i]); 
} 
printf("\n"); 
} 
int main() { 
struct Queue queue; 
int choice, element; 
initializeQueue(&queue); 
while (1) { 
printf("\nQueue Operations Menu:\n"); 
printf("1. Enqueue\n"); 
printf("2. Dequeue\n"); 
printf("3. Display\n"); 
printf("4. Exit\n"); 
printf("Enter your choice: "); 
scanf("%d", &choice); 
switch (choice) { 
case 1: 
printf("Enter element to enqueue: "); 
scanf("%d", &element); 
enqueue(&queue, element); 
break; 
case 2: 
element = dequeue(&queue); 
if (element != -1) 
printf("Dequeued element: %d\n", element); 
break; 
case 3: 
displayQueue(&queue); 
break; 
case 4: 
exit(0); 
default: 
printf("Invalid choice! Please enter a valid option.\n"); 
} 
} 
return 0; 
} 
 

//OUTPUT: 

Queue Operations Menu: 

1. Enqueue 

2. Dequeue 

3. Display 

4. Exit 

Enter your choice: 1 



Enter element to enqueue: 5 

5 insert into queue 

 

Queue Operations Menu: 

1. Enqueue 

2. Dequeue 

3. Display 

4. Exit 

Enter your choice: 1 

Enter element to enqueue: 2 

2 insert into queue 

 

Queue Operations Menu: 

1. Enqueue 

2. Dequeue 

3. Display 

4. Exit 

Enter your choice: 1 

Enter element to enqueue: 4 

4 insert into queue 

 

Queue Operations Menu: 

1. Enqueue 

2. Dequeue 

3. Display 

4. Exit 

Enter your choice: 2 

Dequeued element: 5 

 

Queue Operations Menu: 



1. Enqueue 

2. Dequeue 

3. Display 

4. Exit 

Enter your choice: 3 

queue elements: 2 4  

 

Queue Operations Menu: 

1. Enqueue 

2. Dequeue 

3. Display 

4. Exit 

Enter your choice: 4 

 

 

=== Code Execution Successful ===