//  Copyright (c) 2018 Antoine Tran Tan

#include <userint.h>
#include <ansi_c.h>
#include "my_header.h"
#include "TP_lib_suite.h"


int main(void)
{
	char phrase[100];
	char prenom[100];
	char nom[100];
	unsigned long int annee;
					   
/////////////////////////////////////////////////////////////////////////
	printf("Nom : ");
	scanf("%s", nom);
	printf("prenom : ");
	scanf("%s", prenom);
	printf("Annee de naissance : ");
	scanf("%lu", &annee); 
	
	sprintf(phrase,"Je suis %s %s et je suis née en l'année %lu", nom, prenom, annee);
	
	MessagePopup("Voici la chaine", phrase);
																
	return 0;

}
