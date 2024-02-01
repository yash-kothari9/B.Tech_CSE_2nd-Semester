#include<stdio.h>

int main(){
    int arr[100], length, i, position;

    printf("Enter the size of the array:");
    scanf("%d", &length);
    
    for (i=1; i<=length; i++){
        printf("\nEnter the %d element:", i);
        scanf("%d", &arr[i-1]);
    }

    printf("\nEnter the position of the element you wish to delete: ");
    scanf("%d", &position);

    for (i=position-1; i<length; i++){
        arr[i]=arr[i+1];
    }

    printf("\nThe new array is: ");
    for (i=0; i<length-1; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}