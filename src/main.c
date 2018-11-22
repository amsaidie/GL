//  Copyright (c) 2018 Antoine Tran Tan
//

#include <ansi_c.h>
#include "my_header.h"

#define SEUIL 5
#define SEUILB -100 
#define SEUILH 200 

int exo1(void) ;
int exo2(void) ;

int main(void)
{
	exo1();
	exo2();
	return 0;
}


int exo1(void)
{
	unsigned char bin[10] =
	{0,1,2,3,4,5,6,7,8,9};
	int i=0;

	for(i=0;i<10;i=i+1)
	{
		if(bin[i]>SEUIL) 
		{
			bin[i]=1;
		}
			   
		else if(bin[i]<SEUIL) {
			bin[i]=0;
		}
	}
	return 0;
}



int exo2(void)
{
	int sat[10] = {0,0,0,0,0,0,0,0,0,0};
	int i=0;
	
	// Initialization du tableau
	for(i=0;i<10;i=i+1)
		sat[i]= rand() - 16383;

	for(i=0;i<10;i=i+1)
	{
		if(sat[i]>SEUILH) 
		{
			sat[i]=1;
		}
			   
		else if(sat[i]<SEUILB) {
			sat[i]=0;
		}
	}
	return 0;
}
