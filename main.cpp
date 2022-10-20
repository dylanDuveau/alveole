#include "alveoleslibres.h"
#include "magasins.h"
#include "menu.h"
#include "rouleau.h"
#include "stock.h"
#include <iostream>

using namespace std;

enum {
    ENTRER_ROULEAU = 1,
    SORTIR_SERIE,
    VISUALISER,
    QUITTER
};




int main()
{
    Magasin leMagasin;
    int choix;

        try{
            Menu leMenu("../rouleaux/magasin.txt");
            do
            {
                choix = leMenu.Afficher();
                switch (choix)
                {
                case ENTRER_ROULEAU:
                    system("clear");
                    leMagasin.EntrerRouleau();
                    Menu::AttendreAppuiTouche();
                    break;
                case SORTIR_SERIE:
                    system("clear");
                    leMagasin.SortirRouleau();
                    Menu::AttendreAppuiTouche();
                    break;
                case VISUALISER:
                    system("clear");
                    cout << endl << "Affichage des rouleaux" << endl;
                    leMagasin.Visualise();
                    Menu::AttendreAppuiTouche();
                    break;
                }

            } while(choix != QUITTER);
        }
        catch(std::runtime_error &e){
            cout << e.what() << endl;
            exit(EXIT_FAILURE);
        }
    return 0;
}







