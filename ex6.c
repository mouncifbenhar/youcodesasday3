/*. Challenge 6 : Multiplication par Facteur
Développez un programme qui multiplie chaque élément du tableau par un facteur donné.
Processus :
1. Saisir le tableau original
2. Demander le facteur de multiplication
3. Créer et afficher le tableau résultant
Objectif : Manipuler les éléments de tableau avec des opérations arithmétiques.*/


#include <stdio.h>


int main(){

    int a,c;
    printf("a; ");
    scanf("%d",&a);
    printf("c: ");
    scanf("%d",&c);

    int t[a];
    for(int i = 0 ; i < a ; i++){
        printf("indx%d\n",i+1);
        scanf("%d",&t[i]); 
        t[i] = t[i] * c ;
    }
    for(int j = 0 ; j < a ; j++){
        
        printf("%d\n",t[j]);

    }








}












