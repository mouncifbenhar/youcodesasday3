
/*     Challenge 4 : Recherche du Maximum
Développez un programme qui trouve l'élément le plus grand dans un tableau.
Algorithme : Initialiser avec le premier élément, puis comparer avec chaque élément
suivant.   */

#include <stdio.h>


int main(){

    
    int t[7]={100,3,4,11,105,17,14};
    int max = t[0];


    for ( int i = 0 ; i < 7 ; i++ ){
         if( t[i] > max){
            max = t[i];
         }
    }
      printf("%d\n",max);
}











