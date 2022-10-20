#include "magasins.h"
#include <iostream>

using namespace std;

Magasin::Magasin():
    lesAlveolesLibres(NB_RANGEE,NB_COLONNES)
{

}

void Magasin::EntrerRouleau()
{
    string reference ;
    int diametre ;
    int laRangee;
    int laColonne;


if(lesAlveolesLibres.Reserver(laRangee, laColonne))
{
    cout << " Indiquer les caractéristiques du rouleau a ajouter " << endl;
    cout << " reference du rouleau " ;
    cin >> reference;
    cout << "diametre du rouleau :";
    cin >> diametre;
}
}

void Magasin::SortirRouleau()
{
    Stock::iterator posDebut;
    int laRangee;
    int laColonne;
    Rouleau courant;

    int nbRouleau = leStock.RechercherSerie(posDebut);
    if(nbRouleau > 0)
    {
        for( int indice = 0 ; indice < nbRouleau ; indice ++)
        {
            courant = *posDebut;
            courant.ObtenirLocalisation(laRangee,laColonne);
            lesAlveolesLibres.Liberer(laRangee,laColonne);
            leStock.SortirRouleau(posDebut++);
            Chariot.D
        }
    }
    else
    {
        cout << " il n'y a plus de de rouleau dans le magasin " << endl;
    }
}

void Magasin::Visualise()
{
    cout <<"Rouleaux dans le magins: "<< endl;
    if(!leStock.empty()){
        leStock.Visualiser();
    }else {
        cout << "Stock vide" << endl;
    }
    cout <<"Numéros d'alvéoles disponibles: "<<endl;
    if(!lesAlveolesLibres.empty()){
        lesAlveolesLibres.Visualiser();
    } else {
        cout << "Le magasin est complet" << endl;
    }
}
