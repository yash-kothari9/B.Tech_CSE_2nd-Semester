#include <stdio.h>
int power(int base, int powr) {
   int answer = 1;
   for (int i = 0; i<powr;i++) {
       answer*= base;
   }
   return answer;
}
int main() {
   int base, powr, answer;
   printf("Enter the base value: ");
   scanf("%d", &base);

   printf("Enter the power value: ");
   scanf("%d", &powr);

   int (*ptr)(int,int) = power;
   answer = ptr(base,powr);

   printf("%d raised to the power of %d is %d\n",base,powr,answer);

   return 0;
}