#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int nombre=0;

    do
    {
        /* code */
        printf("entrer un nombre positif non nul :");
        scanf("%d", &nombre);
    } while (nombre<=0);

    if (nombre<3)
    {
        /* code */
        printf("Le nombre est premier !");
    }
    else
    {
        int i=1;
        while(i<=sqrt(nombre))
        {
            i++;
            if((nombre%i) == 0)
            {
                printf("NOMBRE NON PREMIER, il est divisible par %d", i);
                return ;
            }
        };
        printf("%d est un NOMBRE PREMIER", nombre);
        return 0;

    }
}
