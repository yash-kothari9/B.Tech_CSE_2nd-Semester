#include<stdio.h>

int main(){
    int arr[100];
    int length, i, sum=0;

    printf("Enter the number of elements in the array:");
    scanf("%d", &length);

    for (i=1; i<=length; i++){
        printf("\nEnter the %d element:", i);
        scanf("%d", &arr[i-1]);
        sum+=arr[i-1];
    }

    printf("\nThe sum of the elements of the array is: %d", sum);
    
    return 0;
}