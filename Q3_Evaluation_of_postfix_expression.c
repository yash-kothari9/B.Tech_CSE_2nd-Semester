#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX_SIZE 100

int stack[MAX_SIZE];
int top = -1;

void push(int value) {
    if (top == MAX_SIZE - 1) {
        printf("Stack overflow\n");
        exit(EXIT_FAILURE);
    }
    stack[++top] = value;
}

int pop() {
    if (top == -1) {
        printf("Stack underflow\n");
        exit(EXIT_FAILURE);
    }
    return stack[top--];
}

int evaluatePostfix(char postfix[]) {
    for (int i = 0; postfix[i] != '\0'; i++) {
        if (isdigit(postfix[i])) {
            push(postfix[i] - '0');
        } else {
            int operand2 = pop();
            int operand1 = pop();

            switch (postfix[i]) {
                case '+':
                    push(operand1 + operand2);
                    break;
                case '-':
                    push(operand1 - operand2);
                    break;
                case '*':
                    push(operand1 * operand2);
                    break;
                case '/':
                    push(operand1 / operand2);
                    break;
                default:
                    printf("Invalid operator: %c\n", postfix[i]);
                    exit(EXIT_FAILURE);
            }
        }
    }

    return pop();
}

int main() {
    char postfix[50];
    printf("Enter postfix expression: ");
    scanf("%s", postfix);

    int result = evaluatePostfix(postfix);
    printf("Result: %d\n", result);

    return 0;
}
