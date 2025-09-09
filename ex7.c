/*. Challenge 7 : Tri par Ordre Croissant
Créez un programme qui trie un tableau en ordre croissant sans utiliser de fonctions
prédéfinies.
Algorithme suggéré : Tri à bulles ou tri par sélection
Objectif : Implémenter un algorithme de tri de base.  */


#include <stdio.h>

int main(){

    int t[]={10,15,12,14,16,11,19};
    int a = 7;

    for (int i = 0 ; i < a ; i++){

       for(int j = 0 ; j < a - 1 ; j++){

          if( t[j] > t[j+1] ){
             int d = t[j];
             t[j] = t[j+1];
             t[j+1] = d ;
          }
       }
       
    }
    for(int d = 0; d < a ; d++){
        printf("%d\n",t[d]);
    }


}










