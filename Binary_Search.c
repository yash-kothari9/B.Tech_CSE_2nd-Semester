#include<stdio.h>

int main(){
    int arr[100];
    int length, i, target, low=0, high, mid;

    printf("Enter the number of elements in the array:");
    scanf("%d", &length);

    for (i=0; i<length; i++){
        printf("\nEnter element %d: ", i);
        scanf("%d", &arr[i]);
    }

    high=length-1;

    printf("\nEnter the target element:");
    scanf("%d", &target);

    while (low<=high){
        mid = (low+high)/2;
        if (arr[mid]==target){
            printf("\nTarget is at index: %d", mid);
            break;
        }

        else if (target<arr[mid]){
            high=mid-1;
        }

        else if (target>arr[mid]){
            low=mid+1;
        }
    }

    if (low>mid){
        printf("\nTarget not found.");
    }

    return 0;
}