#include<stdio.h>

int main ()
{
    float x1,x2,y1,y2,a,b;

    printf("Entrer un coordonnée (x1,y1) d'un point:\n");
    printf("(Appuiez le touche entrer pour confirmer les saisies)\n");
    printf("x1=");
    scanf("%f",&x1);
    printf("y1="); 
    scanf("%f",&y1);

    printf("Entrer les coordonneées (x2,y2) d'un autre point:\n");
    printf("x2=");
    scanf("%f",&x2);
    printf("y2="); 
    scanf("%f",&y2);

    a=(y1-y2)/(x1-x2);
    b=y1-a*x1;

    if (x1==x2) {
        printf("Il n'y a pas de droite correspondant");
    }
    else if (a==0) {
        printf("L'equation de droite correspondant est y=%.2f\n",b);
    }
    else if (b<0) {
        printf("L'equation de droite correspondant est y=%.2fx%.2f\n",a,b);
    }
    else if (b==0) {
        printf("L'equation de droite correspondant est y=%.2fx\n",a);
    }
    else {
        printf("L'equation de droite correspondant est y=%.2fx+%.2f\n",a,b);
    }

    return (0);
} 
