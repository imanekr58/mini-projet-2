#include <stdio.h>
int main () {
    int  l;
    printf("enter le nombre des lignes:");
   scanf("%d", &l);
   
   int x, y;
   for (x = 1 ; x <= y ; x++) {
    for (y = 1 ; y <= x - l; y++ )
    {
    printf(" ") ;

   }
}
   for (y = 1 ; y <= x * 2-1 ; y++){
    printf ("*") ;

   }
   printf ("\n") ;
   return 0 ; 

}
