#include<stdio.h>

int main(){
    int *p;
    int length, arr[100], sum = 0, i;

    printf("Enter the length of the array:");
    scanf("%d",&length);

    printf("Enter the elements of the array:");
    for (i=0; i<length; i++){
        scanf("%d", &arr[i]);
    }

    printf("The array entered is:");
    for (i=0; i<length; i++){
        printf("%d ", arr[i]);
        sum+=arr[i];
    }
    printf("\n");
    
    printf("The sum of the array elements is equal to = %d",sum);

    return 0;
}