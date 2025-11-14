#include <stdio.h>
#define SIZE 9  

int stack[SIZE];
int top = -1;  

void push(int value) {
    stack[++top] = value;
 
}

void pop() {
    stack[top--];
}
int main() {
    int a[]={2,5,9,3,1,12,6,8,7};
    int span[9];
    span[0]=1;
    push(0);
    for(int i=1;i<=8;i++){
        int elem=a[i];
        while(top>-1 && elem>a[stack[top]]){
            pop();
        }
        if(top==-1){
            span[i]=i+1;
            push(i);
        }
        else{
            span[i]=i-stack[top];
            push(i);
        }
    }
    printf("\narr:");
    for(int i=0;i<9;i++){
        printf("%d ",a[i]);
    }
    printf("\nnge:");
    for(int i=0;i<9;i++){
        printf("%d ",span[i]);
    }
}