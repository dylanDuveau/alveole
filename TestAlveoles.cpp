//#include "alveoleslibres.h"
//#include "menu.h"

//enum {
//    RESERVER = 1,
//    LIBERER,
//    VISUALISER,
//    QUITTER
//};

//int main()
//{
//    AlveolesLibres alveole(2,5);
//    int choix;
//    int val;
//    int val2;
//        try{
//            Menu leMenu("../rouleaux/menu.txt");
//            do
//            {
//                choix = leMenu.Afficher();
//                switch (choix)
//                {
//                case RESERVER:
//                    system("clear");
//                    cout << "Selectionner la valeur de la rangee ";
//                    scanf("%d",&val);
//                    cout << "Selectionner la valeur de la colonne ";
//                    scanf("%d",&val2);
//                    alveole.Reserver(val,val2);
//                    Menu::AttendreAppuiTouche();
//                    break;
//                case LIBERER:
//                    system("clear");
//                    cout << "Selectionner la valeur de la rangee: ";
//                    scanf("%d",&val);
//                    cout << "Selectionner la valeur de la colonne: ";
//                    scanf("%d",&val2);
//                    alveole.Liberer(val,val2);
//                    Menu::AttendreAppuiTouche();
//                    break;
//                case VISUALISER:
//                    system("clear");
//                    alveole.Visualiser();
//                    break;
//                }

//            } while(choix != QUITTER);
//        }
//        catch(std::runtime_error &e){
//            cout << e.what() << endl;
//            exit(EXIT_FAILURE);
//        }
//    return 0;
//}

