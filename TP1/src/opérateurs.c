#include <stdio.h>
#include <string.h>

int main() {
int a = 16;
int b = 3;
  
/*addition*/
printf("a + b = %d\n", a + b);

/*soustraction*/
printf("a - b = %d\n", a - b);

/*multiplication*/
printf("a * b = %d\n", a * b);

/*division*/
printf("a / b = %f\n", (float)a / b);   /*Pour un résultat décimal, il faut convertir en float*/

/*reste*/
printf("reste de la divison a / b = %d\n", a % b);

/*Utilisez un opérateur de comparaison pour vérifier si a est égal à b et affichez le résultat sous forme de booléen*/
printf(" a = b = %d\n", a == b);  /* %d car entier puisque 0 = false, 1 = true*/
  
/*  ?  %s pour afficher vrai ou faux*/
printf("a == b : %s\n", (a == b) ? "true" : "false");

/*Utilisez un opérateur de comparaison pour vérifier si a est supérieur à b et affichez le résultat sous forme de booléen.*/
printf(" a > b = %d\n", a > b);
printf("a > b : %s\n", (a > b) ? "true" : "false");
  
return 0;
}




