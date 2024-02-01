#include<stdio.h>

int main(){
    int arr[100];
    int length, i;

    printf("Enter the number of elements in the array:");
    scanf("%d", &length);

    for (i=1; i<=length; i++){
        printf("\nEnter the %d element:", i);
        scanf("%d", &arr[i-1]);
    }

    printf("\nThe array you created is: ");
    for (i=1; i<=length; i++){
        printf("%d ", arr[i-1]);
    }

    return 0;
}