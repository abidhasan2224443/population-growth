#include <stdio.h>
int main() {

int x,p;

float a;


printf("Enter your current population :  ");

scanf("%d", &p);

printf("\n enter your population growth (per year): ");

scanf("%d", &x);

        a = p + (float)p*x/100;

        a = p + a;

        a = p +a;

        a = p + a;

        a = p + a;

printf ("After 5 years your population will be %f . ", a);

    return 0;

}