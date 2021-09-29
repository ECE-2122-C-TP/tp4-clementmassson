//
// Created by Clément Masson on 29/09/2021.
//

#include <stdio.h>
#include "exercices.h"
#include "fonctions.h"

void exercice1()
{
    int entier1=0, entier2=0;
    printf("Saisir 2 entiers :");
    scanf("%i", &entier1);
    scanf("%i", &entier2);
    printf("%i \n",getMax(entier1,entier2));
}

void exercice2()
{
    printf("%i",saisirEntier());
}

void exercice3()
{
    int a=saisirEntier(), b=saisirEntier();
    printf("Le périmètre du rectangle est égale à %i et son air à %i", calculPerimetre(a,b), calculAire(a,b));
}

void exercice4()
{
    int entier1=0;
    printf("Saisir 1 entier :");
    scanf("%i", &entier1);
    if (multiple(entier1,3)==1)
    {
        printf("L'entier est un multiple de 3 \n");
    }
    else
    {
        printf("L'entier n'est pas un multiple de 3 \n");
    }
    if (entier1>=10)
    {
        printf("L'entier est superieur ou égal à 10");
    }
    else
    {
        printf("L'entier n'est pas superieur ou égal à 10");
    }
}

void exercice5()
{
    float note1=0, note2=0, note3=0;
    printf("Saisir 3 notes :");
    scanf("%f", &note1);
    scanf("%f", &note2);
    scanf("%f", &note3);
    printf("%f \n", moyenne(note1,note2,note3));
}

void exercice8()
{
    int entier1=0;
    do
    {
        printf("Saisir 1 entier :");
        scanf("%i", &entier1);
    }
    while (!(multiple(entier1,7)==1) && !(multiple(entier1,2)==1));
}

void exercice9()
{
    int nbPierresDisponible=0;
    printf("Rentrer le nombre de pièce disponible :");
    scanf("%i", &nbPierresDisponible);
    printf("Le nombre d'étages possibles est %i", nbEtagePossible(nbPierresDisponible));
}