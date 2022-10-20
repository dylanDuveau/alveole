#include "menu.h"
#include <iostream>
using namespace std;

enum CHOIX_MENU
{
    OPTION_0 = 1,
    OPTION_1,
    OPTION_2,
    OPTION_3,
    QUITTER
};

int main()
{
    bool Retirer;
    float montant;
    int choix;
    Menu leMenu("../eval_cpp/CompteBancaire.txt");
    CompteBancaire leCompteBancaire(100);
    do
    {
        choix = leMenu.Afficher();
        switch (choix)
        {
        case OPTION_0:
            cout << "votre solde est de : "<< leCompteBancaire.ConsulterSolde() << endl;
            Menu::AttendreAppuiTouche();
            break;
        }

        switch (choix)
        {
        case OPTION_1:
            cout << "Montant a déposer :" <<  endl;
            cin >> montant;
           leCompteBancaire.Deposer(montant) ;
           cout << "votre  nouveau solde est de : "<< leCompteBancaire.ConsulterSolde() << endl;
            Menu::AttendreAppuiTouche();
            break;
        }

        switch (choix)
        {
        case OPTION_2:
            cout << "votre retrait :" << endl;
            cin >> montant;
           leCompteBancaire.Retirer(montant);
           cout << "votre  nouveau solde est de : "<< leCompteBancaire.ConsulterSolde() << endl;
            Menu::AttendreAppuiTouche();
            break;
        }

        switch (choix)
        {
        case OPTION_3:
            cout << "Vous avez choisi l'option n°3" << endl;
            Menu::AttendreAppuiTouche();
            break;
        }

    } while(choix != QUITTER);



    return 0;
}
