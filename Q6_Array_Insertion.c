#include<stdio.h>

int main(){
    int arr[100], length, i, element, position;

    printf("Enter the size of the array:");
    scanf("%d", &length);
    
    for (i=1; i<=length; i++){
        printf("\nEnter the %d element:", i);
        scanf("%d", &arr[i-1]);
    }

    printf("\nEnter the position where you want to insert the element: ");
    scanf("%d", &position);

    printf("\nEnter the element you want to insert:");
    scanf("%d", &element);

    for (i=length; i>=position; i--){
        arr[i]=arr[i-1];
    }

    arr[position-1]=element;

    printf("\nThe new array is: ");
    for (i=0; i<length+1; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}