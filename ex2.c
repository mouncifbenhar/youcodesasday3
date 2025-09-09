/*.  Challenge 2 : Saisie Interactive de Tableau
Développez un programme qui demande la taille du tableau puis ses éléments, et les
affiche.
Étapes :
1. Demander le nombre d'éléments
2. Saisir chaque élément
3. Afficher le tableau complet
Objectif : Gérer la taille dynamique et la saisie utilisateur.   */



#include <stdio.h>


int main(){

int v ;
printf("num:\n");
scanf("%d\n",&v);
int b[v];

int i ;
for( i = 0 ; i < v ; i++){
    scanf("%d",&b[i]);
}
    printf("\n");
for( i = 0 ; i < v ; i++){
    printf("%d\n",b[i]);
}

}

