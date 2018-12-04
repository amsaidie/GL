//  Copyright (c) 2018 Antoine Tran Tan

#include <ansi_c.h>
#include "my_header.h"
#include "TP_lib_suite.h"


int main(void)
{
	char phrase[100];
	char prenom[100];
	char nom[100];
	unsigned long int annee;
					   
///////////////////////////////////////////////////////////////////////
	
	sscanf(phrase, "%*s %*s %s %s %*s %*s %*s %*s %*s %lu", nom, prenom, &annee);
	
	sprintf("Je m'appelle Msaidie Aman et je suis ne en 2000", phrase);
	
	return 0;

}
