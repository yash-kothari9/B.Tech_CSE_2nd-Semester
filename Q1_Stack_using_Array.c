#include<stdio.h>
#include<stdlib.h>

#define MAX_SIZE 100

int stack[MAX_SIZE], top=-1; 

void peek(){
    if (top == -1) {
        printf("The stack is empty.\n");
    } else {
        printf("The top element is: %d\n", stack[top]);
    }
}

int is_empty(){
    if (top==-1){
        return 1;
    }
    else {
        return 0;
    }
}

int is_full(int size){
    if (top==size-1){
        return 1;
    }
    else {
        return 0;
    }
}

void push(int element, int size){
    if (is_full(size)){
        printf("Stack overflow. Cannot Push element.\n");
    }
    else {
        top++;
        stack[top]=element;
    }
}

void pop(){
    if (is_empty()){
        printf("Stack is empty. Cannot pop any element.");
    }
    else {
        printf("The popped element is: ", stack[top]);
        top--;
    }
}

void display(){
    int i;

    if (is_empty()){
        printf("The stack is empty.\n");
    }
    else {
        printf("The elements in the stack: \n");
        for (i=top; i>=0; i--){
            printf("%d\n", stack[i]);
        }
    }
}

int main(){
    int size;

    printf("Enter the size of the stack (Maximum=100): ");
    scanf("%d", &size);
    if (size<=0 || size>MAX_SIZE){
        printf("Invalid stack size. Exitting program.");
        return 1;
    }

    int choice, value;

    printf("\nStack Operations using Array:\n");
    printf("---------------------------------");
    printf("\n1.PUSH\n2.POP\n3.PEEK\n4.DISPLAY\n5.EXIT\n");

    while (1){
        printf("Enter the choice: ");
        scanf("%d", &choice);

        switch (choice){
            case 1:
                printf("Enter a value to be pushed: ");
                scanf("%d", &value);
                push(value, size);
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 5:
                printf("EXIT\n");
                exit(0);
            default:
                printf("Invalid choice. Try again.\n");
        }
    }
    return 0;
}