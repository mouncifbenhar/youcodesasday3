/*Challenge 10 : Recherche Linéaire
Développez un programme qui recherche un élément spécifique dans un tableau.
Fonctionnalité : Indiquer si l'élément est présent et éventuellement sa position.
Objectif : Implémenter l'algorithme de recherche linéaire.*/



#include <stdio.h>


int main(){
int a;
int t[]={10,12,14,12,42,13,15,14,17,34};
printf("num: ");
scanf("%d",&a);
int b = 0;
for(int i = 0 ; i < 10 ; i++){
    
    if(t[i] == a){
        printf("L'objet a été retrouvé sur place %d",i);
        b = 1;
    }
}
if( b != 1 ){
    printf("Article non trouvé");
    return 0;
}


}

















