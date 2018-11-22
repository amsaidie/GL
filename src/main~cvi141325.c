//  Copyright (c) 2018 Antoine Tran Tan
//

#include "my_header.h"


int main(void)
{
unsigned char bin[10] =
{0,1,2,3,4,5,6,7,8,9};
int i;
int SEUIL = 5;
			
			for(i=0;i<4;i=i++)
{
	if(bin>SEUIL) 
	{
		bin[10]=1;
	}
			   
	else  
	{
		bin[i]=0;
	}
}
}
