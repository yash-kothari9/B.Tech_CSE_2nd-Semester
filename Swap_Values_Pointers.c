#include<stdio.h>

int main(){
    int a, b, c;
    int *p, *q;

    printf("Enter the value of a:");
    scanf("%d", &a);
    
    printf("Enter the value of b:");
    scanf("%d", &b);

    p = &a;
    q = &b;

    c = *p;
    a = *q;
    b = c;

    printf("The value of a = %d\n", a);
    printf("The value of b = %d", b);

    return 0;
}