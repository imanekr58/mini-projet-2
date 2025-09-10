#include <stdio.h>
int main () {
    char  motsecret [] = {'y','o','u','c','o','d','e'} ;
    int motcache[] = {'-','-','-','-','-','-','-'} ;
    int taille= sizeof(motsecret)/sizeof(motsecret[0]);
char lettre; 
int Letre_trouve = 0;
int essais = 7;
int max_essais = 7;

while (essais > 0 && Letre_trouve <taille){
    printf("\nmot a deviner : ");
    for (int  i = 0; i < taille; i++)
    {printf("saisir une lettre: ");
        scanf("%c", &lettre);

        int trouve = 0;
        for(int i = 0; i < taille; i++){
            if(motsecret[i]== lettre && motcache[i]== '_'){
                motcache[i]== lettre;
                trouve = 1;
                Letre_trouve;
            }
        }
        
    }
    
}

    