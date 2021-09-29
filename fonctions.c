//
// Created by Clément Masson on 29/09/2021.
//

#include <stdio.h>
#include "fonctions.h"

    int getMax(int entier1, int entier2)
    {
        return (entier1>entier2) ? (entier1) : (entier2);
    }


    int saisirEntier()
    {
        int entier=0;
        printf("Saisir un entier :");
        scanf("%i", &entier);
        return(entier);
    }


    int calculPerimetre(int cote1,int cote2)
    {
        return((cote1+cote2)*2);
    }


    int calculAire(int cote1, int cote2)
    {
        return(cote1*cote2);
    }


    int multiple(int entier1, int entier2)
    {
        return (entier1%entier2==0) ? (1) : (0);
    }


    float moyenne(float note1, float note2, float note3)
    {
        if (note1>=0 && note1<=20 && note2>=0 && note2<=20 && note3>=0 && note3<=20)
        {
            return ((note1+note2+note3)/3.0f);
        }
        else
        {
            return (-1);
        }
    }

    int nbEtagePossible(nbPierresDisponible)
    {
        int i=0, somme=0;
        while (nbPierresDisponible>=somme)
        {
            i=i+1;
            somme+=1+(i+1)*(i+1);
        }
        return(i);
    }