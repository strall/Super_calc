/************************************************
*Auteur  : Frédéric Campo
*Projet  : Calculatrice intelligente
*Une calculatrice qui reconnait dynamiquement
*les chaines de calculs tapés par l'utilisateur
*Version : 0.1 (non fonctionnel)
*TODO:
*   - Opérations de base
*   - Calculs d'équations a plusieurs variables
*   - Calculs de complexes
*************************************************/
//Directives de préprocesseur

#include <iostream>
#include <fstream>
#include <string>
#include "console_calcul.h"

using namespace std;
//Présentation graphique

int main()
{
    //Déclaration des variables
    int boucle_menu=0,choix_menu=0;
    //Code principal
    cout << "Calculat0r par Frédéric Campo ; Feedback : <strall@digeatit.com>"<<endl;
    cout << "Menu principal :"<<endl<<"Que souhaitez vous faire?"<<endl;
    cout << "1 : Passer dans la console de calcul"<<endl;
    cout << "2 : Aide"<<endl;
    cout << "3 : Crédits"<<endl;
    cout << "4 : Quitter"<<endl;
    do
    {
        boucle_menu=0;
        choix_menu=0;
        cout<< "Votre choix? ";
        cin >> choix_menu;
        switch(choix_menu)
        {
            case 1 : console_calcul(); break;
            case 2 :
            {
                cout << "Affichage de help.txt"<<endl;
                boucle_menu=1;
                break;
            }
            case 3 :
            {
                cout << "Fait par : Frédéric Campo. Ce travail est mis à disposition"<<endl;
                cout << "selon les termes de la Licence Creative Commons :"<<endl<<"Attribution - Pas d’Utilisation Commerciale - Pas de Modification 2.0 France."<<endl;
                boucle_menu=1;
                break;
            }

            case 4 : cout << "appel de fonction"<<endl; break;
            default :
            {
                cout<<"Ce choix n'existe pas. Veuillez entrer une valeur valide."<<endl;
                boucle_menu=1;
                break;
            }

        }
    }while(boucle_menu==1); //boucle pour menu en cas de choix 2 ou 3 et pour toute valeur incorrecte.


    return 0;
}
