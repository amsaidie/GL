//  Copyright (c) 2018 Antoine Tran Tan

#include "my_header.h"
#include "TP_lib_suite.h"


int main(void)
{
	unsigned char joueur[6] = {3, 4, 33, 12, 42, 9};
	unsigned char gagnant[6] = {0, 0, 0, 0, 0, 0};
	int i=0, j=0;
	int bons_num=0;
	
///////////////////////////////////////////////////////////////////////
	
	initialiserTirage();
	
	for(i=0; i<6; i++)
	{
		gagnant[i]=tirerNumero();
	}


	
	for(i=0; i<6; i++)
	{
		for(j=0; j<6; j++)
		{
			if(joueur[i]==gagnant[j])

				bons_num=bons_num+1;
			}
	}
	
    return 0;
}

