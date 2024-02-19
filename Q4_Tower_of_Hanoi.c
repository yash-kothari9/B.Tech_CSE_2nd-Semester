#include<stdio.h>

void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod){
    if (n==1){
        printf("\nMove 1 disk from rod %c to rod %c", from_rod, to_rod);
        return;
    }
    towerOfHanoi(n-1, from_rod, aux_rod, to_rod);
    printf("\nMove disk %d from rod %c to rod %c", n, from_rod, to_rod);
    towerOfHanoi(n-1, aux_rod, to_rod, from_rod);
}

int main(){
    int n;

    printf("Enter the number of disks: ");
    scanf("%d", &n);
    
    char from_rod = 'A', to_rod = 'C', aux_rod = 'B';
    
    printf("\nTower of Hanoi with %d disks:\n", n);
    towerOfHanoi(n, from_rod, to_rod, aux_rod);

    return 0;
}