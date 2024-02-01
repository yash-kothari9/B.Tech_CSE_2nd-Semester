#include<stdio.h>

int main(){
    int arr[100];
    int length, i, j, duplicates;

    printf("Enter the number of elements in the array:");
    scanf("%d", &length);

    for (i=1; i<=length; i++){
        printf("\nEnter the %d element:", i);
        scanf("%d", &arr[i-1]);
    }

    for (i=0; i<length; i++){
        for (j=i+1; j<length; j++){
            if (arr[i]==arr[j]){
                duplicates++;
                break;
            }
        }
    }

    printf("\nThe number of duplicates = %d", duplicates);

    return 0;
}