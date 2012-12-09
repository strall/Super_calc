/************************************************
*Auteur  : Fr�d�ric Campo
*Projet  : Calculatrice intelligente
*Une calculatrice qui reconnait dynamiquement
*les chaines de calculs tap�s par l'utilisateur
*Version : 0.2 (non fonctionnel)
*TODO:
*   - Op�rations de base
*   - Calculs d'�quations a plusieurs variables
*   - Calculs de complexes
*   - Error Manager
*************************************************/

#include <iostream>
#include <fstream>
#include <string>
#include "liste_chainee.h"


using namespace std;

void console_calcul();
void decryptage(string command_line,int *quit);
void parser(string command_line);

