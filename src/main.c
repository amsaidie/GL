//  Copyright (c) 2018 Antoine Tran Tan
//

#include "my_header.h"
#define SEUIL 5

int main(void)
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
}
