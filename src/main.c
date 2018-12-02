//  Copyright (c) 2018 Antoine Tran Tan

#include "my_header.h"
#include "TP_lib_suite.h"


int main(void)
{
	unsigned char joueur[6] = {12, 23, 1, 45, 37, 9};
	unsigned char gagnant[6] = {0, 0, 0, 0, 0, 0};
	int i=0, j=0, a=0;
	int bons_num=0;
	int best_score=0;
	
///////////////////////////////////////////////////////////////////////
	
	initialiserTirage();
	
	for(a=0;a<100;a++)
	{
		bons_num=0;
		initialiserTirage();
	
	for(i=0; i<6; i++)
	{
		gagnant[i]=tirerNumero();
	}


	
	for(i=0; i<6; i++)
	{
		for(j=0; j<6; j++)
		{
			if(joueur[j]==gagnant[i])

				bons_num=bons_num+1;
			}
	}
	if(best_score<bons_num)
		
		best_score=bons_num;
	}
	return 0;
}

