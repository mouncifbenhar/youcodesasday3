/*Challenge 9 : Inversion de Tableau
Créez un programme qui inverse l'ordre des éléments d'un tableau.
Exemple : [1, 2, 3, 4, 5] devient [5, 4, 3, 2, 1]
Méthode : Échanger les éléments symétriques (premier avec dernier, etc.)
Objectif : Manipuler les indices de tableau de manière symétrique.*/

#include <stdio.h>


int main(){

int a = 5;
int t[]={1,2,3,4,5};
int r[a];

for (int i = 0 ; i < a ; i++){    
       printf("%d\n",t[i]);

}
printf("\n");
for (int i = 0 ; i < a ; i++){

       r[i] = t[ (a - 1) - i] ;    
       printf("%d\n",r[i]);

}

}


























