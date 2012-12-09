/************************************************
*Auteur  : Frédéric Campo
*Projet  : Calculatrice intelligente
*Une calculatrice qui reconnait dynamiquement
*les chaines de calculs tapés par l'utilisateur
*Version : 0.2 (non fonctionnel)
*TODO:
*   - Opérations de base
*   - Calculs d'équations a plusieurs variables
*   - Calculs de complexes
*   - Error Manager
*************************************************/

#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
#include "console_calcul.h"

using namespace std;


void console_calcul()
{
    //declaration des variables utilisées
    int quit=0;
    string command_line;
    int *point_quit=&quit; //pointeur pour la fonction decryptage
    //presentation
    cout<<"Bienvenue dans la console"<<endl;
    cout<<"Pour voir les commandes disponibles, tapez !help"<<endl;
    //fin presentation
    do
    {
        cout << "$ ";
        cin >> command_line;
        decryptage(command_line,point_quit);

    }while(quit==0);
}

void decryptage(string command_line, int *quit)
{
    //déclaration des variables
    int i=0,j=command_line.length(),type_calcul=0;
    /*
    type_calcul => si 0 addition, 1 : soustraction, 2 : multiplication, 3 : division [En tous cas, on va commencer comme ca]
    j => Je pense que la valeur d'initialisation est assez parlante. Servira dans des boucles while.
    i => Valeur pour while
    */
    //Debut de la fonction. On commence par checker si le string est une commande.
    if (command_line[0]=='!')
    {
        if (command_line.find("quit")==1&&command_line.find_last_not_of("quit")==0) //Fonction quitter implémentée
        {
           *quit=1;
           cout<<endl<<"Au revoir !"<<endl;
        }
        else
        {
            //Vais je écrire chaque commande ici, ou coder un greffon python? Ca me semble plus simple.
            cout<<"Envoi dans le mode commandes !!"<<endl;

        }

    }

    else//Mode Calcul et on fait péter le parser !
    {
        parser(command_line);
    }
}

void parser(string command_line)
{
    //Options pour le parser, les caractères a reconnaitre.
    char operateurs[5] ={'!','+','-','/','*'};
    int deci[10] ={0,1,2,3,4,5,6,7,8,9};
    char hexa[16]={0,1,2,3,4,5,6,7,8,9,'A','B','C','D','E','F'};
    //fin options



}









