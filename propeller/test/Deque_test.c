#include <deque.h>
#include <stdio.h>

void main() {
    size16_t size = 16;
    Deque* testDeque = initDequeCalloc(16, sizeof(int));

    for(int i = 1; i <= 16; i++) {
        printf("enqueued %d",dqEnqueue(testDeque, &i));
    }

    int ret;
    for(int i = 1; i <= 16; i++) {
        printf("dequeued %d",dqDequeue(testDeque, &ret));
    }

    destroyDeque(testDeque);

    printf("%d correct!", testDeque->size);

    testDeque = initDequeCalloc(16, sizeof(int));

    for(int i = 1; i <= 16; i++) {
        printf("enqueued %d",dqPush(testDeque, &i));
    }

    for(int i = 16; i > 0; i--) {
        printf("dequeued %d",dqPop(testDeque, &ret));
    }

    destroyDeque(testDeque);

    Deque* ptr =  initDeque(NULL, NULL, 16, sizeof(int));

    ptr = initDeque(&calloc, &free, 16, sizeof(int));
}