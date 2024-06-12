#include <stdio.h>
int main() {
   int x[4] = {6,7,9,8};
   int i;

   for(i = 0; i < 4; ++i) {
      printf("&x[%d] = %p\n", i, &x[i]);
      
   }

   printf("Address of array x: %p", x);  
   printf("\nfirst value  of array x: %d", *x); 

   return 0;
}