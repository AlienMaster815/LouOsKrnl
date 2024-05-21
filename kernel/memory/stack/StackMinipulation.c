#include <LouAPI.h>


typedef struct {
    uint8_t* Base;
    uint8_t* Top;
} Stack;

LOUSTATUS LouKeCreateStack(Stack* stack,uint64_t StackSize) {
    LOUSTATUS Status = LOUSTATUS_GOOD;

    uint8_t* Address = (uint8_t*)LouMalloc(StackSize);

    if (Address == 0x0000)return (!LOUSTATUS_GOOD);

    stack->Base = Address;
    stack->Top = Address + (uintptr_t)StackSize;

    return Status;
}

/*
// Function to initialize the stack
void initializeStack(Stack* stack, int capacity) {
    stack->top = -1;
    stack->capacity = capacity;
    stack->items = (int*)malloc(capacity * sizeof(int));
    if (stack->items == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }
}

// Function to push an item onto the stack
void push(Stack* stack, int item) {
    if (stack->top == stack->capacity - 1) {
        fprintf(stderr, "Stack Overflow\n");
        exit(EXIT_FAILURE);
    }
    stack->items[++stack->top] = item;
}

// Function to pop an item from the stack
int pop(Stack* stack) {
    if (stack->top == -1) {
        fprintf(stderr, "Stack Underflow\n");
        exit(EXIT_FAILURE);
    }
    return stack->items[stack->top--];
}

// Function to check if the stack is empty
int isEmpty(Stack* stack) {
    return (stack->top == -1);
}

// Function to deallocate memory used by the stack
void freeStack(Stack* stack) {
    free(stack->items);
}
*/