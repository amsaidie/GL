//  Copyright (c) 2018 Antoine Tran Tan
//

#include <ansi_c.h>
#include "my_header.h"

#define SEUIL 5
#define SEUILB -100 
#define SEUILH 200 

int exo1(void) ;
int exo2(void) ;
int exo3(void);
int exo4(void);

int main(void)
{
	exo1();
	exo2();
	exo3();
	exo4();
	
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
		sat[i]= rand() - 16383; //Fonction rand() aléatoire comprise entre -16383 et 16383

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






int exo3(void)
{
	int a[10] = {1,10,12,15,18,22,27,32,35,43}; int dist[10];
	int i=0;
	
	// Initialization du tableau
	for(i=0;i<9;i=i+1)
		dist[i+1] = a[i+1] - a[i];
	
	return 0;
}






int exo4(void)
{
	int a[5] = {1,5,9,8,11}; 
	int b[5];
	int i=0;
	
	// Initialization du tableau
	for(i=0;i<5;i=i+1)
		b[i]=a[4-i];
	
	return 0;
}
