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
	char coordonneesx[5]={0,0,0,0,0};
	char coordonneesy[5]={0,0,0,0,0};
	int i, j;
					   
///////////////////////////////////////////////////////////////////////
	
	sscanf(ligne1, "%*s %s", Nom);
	sscanf(ligne2, "%*s %u", &nb_sommets);
	sscanf(ligne3, "%*s %u %*u %u %*u %u %*u% %u %*u %u %*u", &coordonneesx[0], &coordonneesx[1], &coordonneesx[2], &coordonneesx[3], &coordonneesx[4]);
	sscanf(ligne3, "%*s %*u %u %*u %u %*u% %u %*u %u %*u %u", &coordonneesy[0], &coordonneesy[1], &coordonneesy[2], &coordonneesy[3], &coordonneesy[4]);
	
	for(i=0;i<5;i=i+1) //5 fois pour les 5 coordonnées du pentagone
{
	if(coordonneesx[i] !=1) //Pour vérifier s'il a bien les coordonnée du pentagone et non du triangle. Si coordonneex ou y sont différent de -1
	{
		i=i+1;
	}
	if(coordonneesy[i] !=1)
	{
		i=i+1; //i=2 à la fin de la première boucle for. Donc si on le répète 5 fois, On arrive à 10 coordonnées (5 pour x et 5 pour y)
	}
} //Vérification du pentagone terminé
if(i==10)
{
	sprintf(Message, "C'est un %s avec %u sommets",Nom, nb_sommets);
		MessagePopup("Caracteristiques", Message);
}
		
		else
		{
			MessagePopup("Erreur", "Erreur dans la saisie des coordonnees");
		}
			
																
	return 0;

}
