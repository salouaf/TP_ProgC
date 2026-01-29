#include <stdio.h>

int main() {
 /* Types char */
    printf("signed char : %zu octet(s)\n", sizeof(signed char));
    printf("unsigned char : %zu octet(s)\n", sizeof(unsigned char));

    /* Types short */
    printf("signed short : %zu octet(s)\n", sizeof(signed short));
    printf("unsigned short : %zu octet(s)\n", sizeof(unsigned short));

    /* Types int */
    printf("signed int : %zu octet(s)\n", sizeof(signed int));
    printf("unsigned int : %zu octet(s)\n", sizeof(unsigned int));

    /* Types long int */
    printf("signed long int : %zu octet(s)\n", sizeof(signed long int));
    printf("unsigned long int : %zu octet(s)\n", sizeof(unsigned long int));

    /* Types long long int */
    printf("signed long long int : %zu octet(s)\n", sizeof(signed long long int));
    printf("unsigned long long int : %zu octet(s)\n", sizeof(unsigned long long int));

    /* Types réels (pas de signed / unsigned) */
    printf("float : %zu octet(s)\n", sizeof(float));
    printf("double : %zu octet(s)\n", sizeof(double));
    printf("long double : %zu octet(s)\n", sizeof(long double));

    return 0;
}


