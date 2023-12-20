// typedef struct {
//     int ar[100];
//     int head;
//     int tail;
//     int cnt;
// } MyQueue;


// MyQueue* myQueueCreate() {
//     MyQueue* obj=malloc(sizeof(MyQueue));
//     obj->head=0;
//     obj->tail=0;
//     obj->cnt=0;
//     return obj;
// }

// void myQueuePush(MyQueue* obj, int x) {
//     if(obj==NULL) return;

//     obj->cnt++;
//     obj->ar[obj->tail]=x;
//     obj->tail=(obj->tail+1)%100;
// }

// int myQueuePop(MyQueue* obj) {
//     if(obj==NULL) return NULL;

//     obj->cnt--;
//     obj->head=(obj->head+1)%100;
//     return (obj->ar[(obj->head-1)%100]);
// }

// int myQueuePeek(MyQueue* obj) {
//     if(obj==NULL) return NULL;

//     return obj->ar[obj->head];
// }

// bool myQueueEmpty(MyQueue* obj) {
//     if(obj==NULL) return false;

//     return (obj->cnt?false:true);
// }

// void myQueueFree(MyQueue* obj) {
//     if(obj==NULL) return;
//     free(obj);
// }

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct {
    int ar[100];
    int head;
    int tail;
    int cnt;
} MyQueue;

MyQueue* myQueueCreate() {
    MyQueue* obj = malloc(sizeof(MyQueue));
    obj->head = 0;
    obj->tail = 0;
    obj->cnt = 0;
    return obj;
}

void myQueuePush(MyQueue* obj, int x) {
    if(obj == NULL) return;

    obj->cnt++;
    obj->ar[obj->tail] = x;
    obj->tail = (obj->tail + 1) % 100;
}

int myQueuePop(MyQueue* obj) {
    if(obj == NULL || obj->cnt == 0) return -1;

    obj->cnt--;
    int val = obj->ar[obj->head];
    obj->head = (obj->head + 1) % 100;
    return val;
}

int myQueuePeek(MyQueue* obj) {
    if(obj == NULL || obj->cnt == 0) return -1;

    return obj->ar[obj->head];
}

bool myQueueEmpty(MyQueue* obj) {
    if(obj == NULL) return true;

    return (obj->cnt == 0 ? true : false);
}

void myQueueFree(MyQueue* obj) {
    if(obj == NULL) return;
    free(obj);
}

int main() {
    MyQueue* queue = myQueueCreate();
    int choice, value;

    while (1) {
        printf("\n1. Push\n2. Pop\n3. Peek\n4. Check if Empty\n5. Exit\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to push: ");
                scanf("%d", &value);
                myQueuePush(queue, value);
                printf("Value %d pushed to the queue.\n", value);
                break;
            case 2:
                value = myQueuePop(queue);
                if (value != -1)
                    printf("Popped value: %d\n", value);
                else
                    printf("Queue is empty.\n");
                break;
            case 3:
                value = myQueuePeek(queue);
                if (value != -1)
                    printf("Peeked value: %d\n", value);
                else
                    printf("Queue is empty.\n");
                break;
            case 4:
                if (myQueueEmpty(queue))
                    printf("Queue is empty.\n");
                else
                    printf("Queue is not empty.\n");
                break;
            case 5:
                myQueueFree(queue);
                exit(0);
            default:
                printf("Invalid choice! Please enter a valid option.\n");
        }
    }

    return 0;
}
