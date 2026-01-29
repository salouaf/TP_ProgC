#include <stdio.h>
#include <string.h>

int main() {
/*pour les int*/
unsigned int a = 25;
int b = -100;
printf("la valeur de int unsigned est:  %u\n", a);
printf("la valeur de int signed est: %d\n" , b);
  
/*pour les char avec numérique*/
unsigned char c = 20;
char d = -87;
printf("la valeur de char unsigned est:  %u\n", c);
printf("la valeur de char signed est: %d\n" , d);

/*pour les char avec lettre*/
unsigned char e = 'D';
char f = 'S';
printf("la valeur de char unsigned est: %c\n", e);  /*%c affiche caractere lui meme*/
printf("la valeur de char signed est: %c\n" , f); /*%c affiche caractere lui meme*/
printf("Valeur ASCII de char signed : %d\n", f);

/*pour les short*/
unsigned short j = 6553 ;
short h = -3268;
printf("la valeur de short unsigned est:  %hu\n", j); /*%h pour short*/
printf("la valeur de short signed est: %hd\n" , h);

      /*long int */
  unsigned long int k = 1234567890;
  long int l = -1234567890;
  printf("La valeur de long int unsigned est: %lu\n", k); /* %lu pour unsigned long */
  printf("La valeur de long int signed est: %ld\n", l);   /* %ld pour signed long */

    /* ===================== long long int ===================== */
  unsigned long long int m = 123456789012345;
  long long int n = -123456789012345;
  printf("La valeur de long long int unsigned est: %llu\n", m); /* %llu pour unsigned long long */
  printf("La valeur de long long int signed est: %lld\n", n);   /* %lld pour signed long long */

    /* ===================== float ===================== */
  float o = 3.14;
  float p = -2.718;
  printf("La valeur de float positive est: %f\n", o);
  printf("La valeur de float negative est: %f\n", p);

    /* ===================== double ===================== */
  double q = 3.1415926535;
  double r = -2.7182818284;
  printf("La valeur de double positive est: %lf\n", q);
  printf("La valeur de double negative est: %lf\n", r);

    /* ===================== long double ===================== */
  long double s = 3.141592653589793238;
  long double t = -2.718281828459045235;
  printf("La valeur de long double positive est: %Lf\n", s);
  printf("La valeur de long double negative est: %Lf\n", t);

   return 0;

}
