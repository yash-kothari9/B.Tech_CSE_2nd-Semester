#include<stdio.h>

int main(){
    int arr[100];
    int length, i, target;

    printf("Enter the number of elements in the array:");
    scanf("%d", &length);

    for (i=0; i<length; i++){
        printf("\nEnter element %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("\nEnter the target element:");
    scanf("%d", &target);

    for (i=0; i<length; i++){
        if (target==arr[i]){
            printf("\nThe target element is at index: %d",i);
            break;
        }
    }

    if(i==length){
        printf("Target element not found.");
    }

    return 0;
}