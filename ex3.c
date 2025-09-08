#include <stdio.h>
int main () {
    int x,y,z = 0;
    printf("enter un nombre:");
    scanf("%d",&x);
    for (y=1; y <= x; y++) 
    {
        
        if (x % y == 0){
          z++;  
       } 
    }
    if ( z != 2)
    {
        printf("nombre n'est pas premier");
    }
    else {
        printf("nombre est premier") ;
        
    }
    
}
