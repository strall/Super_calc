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
    //presentation
    cout<<"Bienvenue dans la console"<<endl;
    cout<<"Pour avoir les commandes disponibles, tapez !help"<<endl;
    //fin presentation
    do
    {
        cout << "# ";
        cin >> command_line;
        decryptage(command_line);

    }while(quit==0);
}

void decryptage(string command_line)
{
    int i=0,j=0,type_calcul=0; //type_calcul => si 0 addition, 1 soustraction, 2 multiplication, 3 division
    bool command=false;
    j=command_line.length();
    if (command_line[0]=='!')
    {
        cout<<"Envoi dans le mode commandes !!"<<endl;
        //command=true;
        /*Premier test, histoire de savoir si on a affaire a une commande user ou pas.*
         *Celle-ci seront implémentées une autre fois                                 */

    }
    if(command=false)//Mode Calcul
    {
        for(i=0;i<j;i++)
        {

        }
    }
}
