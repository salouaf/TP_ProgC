#include <stdio.h>

int main() {
printf("la taille d'un char : %zu octets\n",sizeof(char));
printf("la taille d'un short : %zu octets\n",sizeof(short));
printf("la taille d'un int : %zu octets\n",sizeof(int));
printf("la taille d'un long int : %zu octets\n",sizeof(long int));
printf("la taille d'un long long int : %zu octets\n",sizeof(long long int));
printf("la taille d'un float : %zu octets\n",sizeof(float));
printf("la taille d'un double : %zu octets\n",sizeof(double));
printf("la taille d'un long double : %zu octets\n",sizeof(long double));
return 0;
}

