/*Challenge 3 : Calculateur de Somme
Créez un programme qui calcule la somme totale des éléments d'un tableau.
Processus : Saisie → Calcul cumulatif → Affichage du résultat
Objectif : Utiliser une variable d'accumulation avec les tableaux.         */


#include <stdio.h>
int main()
{
int a = 0;
printf("num: \n");
int t[a];
scanf("%d",&a);
int i;
int r = 0;

for(i = 0 ; i < a ; i++){

    printf("num%d\n",i+1);
    scanf("%d",&t[i]);
    r = r + t[i];
}
        printf("total = %d\n",r);








}











