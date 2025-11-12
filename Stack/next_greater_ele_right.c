#include <stdio.h>
#define SIZE 9  // Maximum size of the stack

int stack[SIZE];
int top = -1;  // Top of the stack

// Push function
void push(int value) {
    if (top == SIZE - 1)
        printf("Stack Overflow! Cannot push %d\n", value);
    else {
        stack[++top] = value;
        printf("%d pushed to stack.\n", value);
    }
}

// Pop, function
void pop() {
    if (top == -1)
        printf("Stack Underflow! Nothing to pop.\n");
    else {
        printf("%d popped from stack.\n", stack[top--]);
    }
}

// Peek function that returns the top element
int peek() {
    if (top == -1) {
        printf("Stack is empty.\n");
        return -1;  // Indicate an empty stack
    } else {
        return stack[top];
    }
}


// Main function
int main() {
    int a[]={2,5,9,3,1,12,6,8,7};
    int nge[9];
    printf("top:%d\n",top);
    push(a[8]);
    printf("top:%d\n",top);
    peek();
    nge[8]=-1;
    for(int i=7;i>=0;i--){
        int elem=a[i];
        while(top>-1 && elem>stack[top]){
            pop();
        }
        if(top==-1){
            nge[i]=-1;
            push(elem);
        }
        else{
            nge[i]=stack[top];
            push(elem);
        }
    }
    printf("\narr:");
    for(int i=0;i<9;i++){
        printf("%d ",a[i]);
    }
    printf("\nnge:");
    for(int i=0;i<9;i++){
        printf("%d ",nge[i]);
    }
}
