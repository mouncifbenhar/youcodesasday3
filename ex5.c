/*Challenge 5 : Recherche du Minimum
Créez un programme qui trouve l'élément le plus petit dans un tableau.
Méthode : Similaire au maximum, mais avec comparaison inverse.
Objectif : Renforcer les algorithmes de recherche d'extremum.*/

#include <stdio.h>


int main(){

    
    int t[7]={100,3,4,11,105,17,14};
    int mini = t[0];


    for ( int i = 0 ; i < 7 ; i++ ){
         if( t[i] < mini){
            mini = t[i];
         }
    }
      printf("%d\n",mini);
}















