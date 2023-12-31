// typedef struct {
//     int f, b, r, n, sz, *q;
// } MyCircularQueue;

// MyCircularQueue* myCircularQueueCreate(int k) {
//     MyCircularQueue *q = calloc(1, sizeof *q);
//     q->q = calloc(1, sizeof(int [k]));
//     q->sz = k;
//     return q;
// }

// bool myCircularQueueEnQueue(MyCircularQueue* obj, int value) {
//     if (obj->n == obj->sz)
//         return false;
//     obj->n++;
//     obj->q[obj->r = obj->b] = value;
//     obj->b = (obj->b + 1) % obj->sz;
//     return true;
// }

// bool myCircularQueueDeQueue(MyCircularQueue* obj) {
//     if (!obj->n)
//         return false;
//     obj->n--;
//     obj->f = (obj->f + 1) % obj->sz;
//     return true;
// }

// int myCircularQueueFront(MyCircularQueue* obj) {
//     return obj->n ? obj->q[obj->f] : -1;
// }

// int myCircularQueueRear(MyCircularQueue* obj) {
//     return obj->n ? obj->q[obj->r] : -1;
// }

// bool myCircularQueueIsEmpty(MyCircularQueue* obj) {
//     return !obj->n;
// }

// bool myCircularQueueIsFull(MyCircularQueue* obj) {
//     return obj->n == obj->sz;
// }

// void myCircularQueueFree(MyCircularQueue* obj) {
//     free(obj->q);
//     free(obj);
// }

