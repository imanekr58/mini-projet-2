#include <stdio.h>
int main (){
    int x;
    printf("entrer un entier:");
    scanf("%d",&x);
    for(x=1; x<=10; x++){
        printf("5 * %d = %d\n", x , 5*x);
    }
