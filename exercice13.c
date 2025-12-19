#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct
{
    /* Les coordonnées du point */
    float x;
    float y;
}point;

int main()
{
    float n1=0, n2=0, d = 0;

    printf("Entrer les coordonnées de 02 points : P1 et P2\n");

    printf("Commençons avec le premier point P1\n");
    printf("Coord X de P1:");
    scanf("%f", &n1);
    printf("Coord Y de P1:");
    scanf("%f", &n2);

    point p1;
    p1.x = n1;
    p1.y = n2;

    printf("Second point P2\n");
    printf("Coord X de P2:");
    scanf("%f", &n1);
    printf("Coord Y de P2:");
    scanf("%f", &n2);

    point p2;
    p2.x = n1;
    p2.y = n2;

    printf("Calculons la distance entre P1 et P2 !\n");
    d=sqrt((p2.x-p1.x)*(p2.x-p1.x)+(p2.y-p1.y)*(p2.y-p1.y));
    printf("D=:%f", d);

    return 0;
}