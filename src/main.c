//  Copyright (c) 2018 Antoine Tran Tan

#include <userint.h>
#include <ansi_c.h>
#include "my_header.h"
#include "TP_lib_suite.h"


int main(void)
{
	char ligne1[80]="Nom: Pentagone";  //sprintf(ligne1, "Nom: Pentagone")
	char ligne2[80]="nb_sommets: 5";
	char ligne3[80]="coordonnees: 10 20 30 20 30 40 43 53 35 65";
	char Nom[80];
	char Message[80];
	unsigned int nb_sommets;
	char coordonneesx[5];
	char coordonneesy[5];
					   
///////////////////////////////////////////////////////////////////////
	sscanf(ligne1, "%*s %s", Nom);
	sscanf(ligne2, "%*s %u", &nb_sommets);
	//sscanf(ligne3, "%*s %s %s %s %s %s", coordonnees);	
		
	//sprintf(ligne1, "C'est un %s", Nom);
	//sprintf(ligne2, "avec %u sommets", nb_sommets);
	sprintf(Message, "C'est un %s avec %u sommets",Nom, nb_sommets);
	//MessagePopup("Voici le type de ploygone", ligne1);
	//MessagePopup("Voici le nombre de sommet", ligne2);
	MessagePopup("Caracteristiques", Message);
																
	return 0;

}
