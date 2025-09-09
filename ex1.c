/*Exercices sur les Tableaux en C
Challenge 1 : Initialisation et Affichage de Base
Créez un programme qui initialise un tableau avec des valeurs prédéfinies et les affiche.
Exemple : Tableau [1, 2, 3, 4, 5] affiché ligne par ligne.
Objectif : Maîtriser la déclaration, l'initialisation et le parcours de tableaux.
*/


#include <stdio.h>


int main(){

int t[5];
int i ;
for( i = 0 ; i < 5 ; i++ ){
    scanf("%d",&t[i]);
}
for(i = 0 ; i < 5 ; i++){
    printf("%d\n",t[i]);
}

return 0;

}






















