//  Copyright (c) 2018 Antoine Tran Tan

#include "my_header.h"
#include "TP_lib_suite.h"

/*int partie1(void);

int main(void)
{
	partie1();
    return 0; */

int main(void)
{
	unsigned char joueur[6] = {3, 4, 33, 12, 42, 9};
	unsigned char gagnant[6] = {12, 40, 36, 5, 9, 27};
	int i=0, j=0;
	int bons_num=0;
	
	for(i=0; i<1; i++)
	{
		for(j=0; j<6; j++)
		{
			if(joueur[i]==joueur[j])
				bons_num=bons_num+1;
			}
	}
	
    return 0;
}
