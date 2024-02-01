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

    printf("\nThe reverse of the array is: ");
    for (i=length-1; i>=0; i--){
        printf("%d ", arr[i]);
    }

    return 0;
}