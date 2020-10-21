#include <stdio.h>
#include <stdlib.h>
//Programmme qui calcule la distance entre deux points en considerant la droite A et B

int main()
{
    int XB, XA, DeltaX, DeltaY, YA, YB, P;
    double DIST;
    printf("Entrer l'abcisse du point B:\n");
    scanf("%d", &XB);
    printf("Entrer l'abcisse du point A:\n");
    scanf("%d", &XA);
    DeltaX=XB-XA;
    printf("delta x est %d\n\n", DeltaX);

    printf("Entrer l'ordonnee du point A:\n");
    scanf("%d", &YA);
    printf("Entrer l'ordonnee du point B:\n");
    scanf("%d", &YB);
    DeltaY=YB-YA;
    printf("delta y est %d\n\n", DeltaY);

    P=(DeltaX)*(DeltaX)+(DeltaY)*(DeltaY);
    DIST=sqrt(P);
    printf("La distance entre ces deux points A et B est %f", DIST);
    return 0;
}
