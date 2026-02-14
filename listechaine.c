#include <stdio.h>
#include <stdlib.h>

struct maillon
{
    int valeur;
    struct maillon *next;
};
typedef struct maillon maillon;
typedef maillon* Liste;
int is_empty(maillon *L)
{
    if(L==NULL)
        return 1;
    return 0;
}
void AjouterDebut(maillon **L , int v)
{
    maillon *newmaillon = (Liste)malloc(sizeof(maillon));
    if(newmaillon == NULL){
        return;
    }
    newmaillon->valeur=v;
    newmaillon->next = *L;
    L = newmaillon;
}
void AjouterFin(maillon **L , int v)
{
    maillon *newmaillon = (Liste)malloc(sizeof(maillon));
    maillon *P = (Liste)malloc(sizeof(maillon));
    if(newmaillon == NULL)
    {
        return;
    }
    else 
    {
        newmaillon->valeur = v;
        newmaillon->next = NULL;
        if(L==NULL)
        {
            L =newmaillon;
        }
        else
        {
            P=L;
            while(P!=NULL)
            {
                P->next;
            }
            P->next = newmaillon;
        }
    }
}
void ParcourirListe(maillon **L)
{
    Liste afichemaillon = L;
    while (afichemaillon !=NULL)
    {
        printf("%d\n",afichemaillon->valeur);
        afichemaillon = afichemaillon->next;
    }
}
void suppresionElement(maillon *L , int v)
{
    Liste P,Q;
    if(L != NULL)
    {
        if(L->valeur == v)
        {
            Q = L;
            L = L->next;
            free(Q);
        }
        else
        {
            P = L;
            while(P->next != NULL && P->next->valeur != v)
            {
                P=P->next;
            }
            if(P->next != NULL)
            {
                Q=P->next;
                P->next = Q->next;
                free(Q);
            }
        }
    }
}
int nombreelement(maillon *L)
{
    int n=0;
    while(L!=NULL)
    {
        n++;
        L = L->next;
    }
    return n;
}
int main()
{
    maillon *liste1;
    if(is_empty(liste1)){
        printf("La liste est vide");
        AjouterDebut(liste1, 12);
        if(is_empty(liste1))
        {
            ParcourirListe(liste1);
        }
    }

    
}