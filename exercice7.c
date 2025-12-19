#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a, b, c, x0, x1, x2, delta;

    printf("entrer les valeurs a, b et c de l'equation ax²+bx+c=0 \n");

    printf("valeur de a :");
    scanf("%f", &a);

    printf("valeur de b :");
    scanf("%f", &b);

    printf("valeur de c :");
    scanf("%f", &c);

    if (a==0)
    {
        x0=-c/b;
        printf("s'agit d'une équation de degré 1*\n");
        printf("La solution est : %f", x0);
    }
    else
    {
        delta =(b*b)-(4*a*c);

        if (delta < 0)
        {
            printf("Ensemble solution vide (En gros il y'a pas de solution) !");
        }
        else if (delta == 0)
        {
            x0= -1*b/(2*a);
            printf("L'équation admet une solution unique x0 = %f", x0);
        }
        else
        {
            x1= ((-1*b)-sqrt(delta))/(2*a);
            x2= ((-1*b)+sqrt(delta))/(2*a);
            printf("L'équation 02 solution distincte x1 = %f et x2 = %f", x1, x2);
        }

    }

}