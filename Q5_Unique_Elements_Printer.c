#include<stdio.h>

int main(){
    int arr[100], length, i, j, unique;

    printf("Enter the size of the array:");
    scanf("%d", &length);
    
    for (i=1; i<=length; i++){
        printf("\nEnter the %d element:", i);
        scanf("%d", &arr[i-1]);
    }

    printf("The unique elements are: ");
    for (i=0; i<length; i++){
        unique=1;
        for (j=0; j<i; j++){
            if (arr[i]==arr[j]){
                unique=0;
                break;
            }
        }
        if (unique){
            printf("%d ", arr[i]);
        }
        
    }

    return 0;
}