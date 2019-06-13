#include <stdio.h>

int questao07 (float v[],int*quant, float num)
{
	int i=0;
	while (i< *quant)
	{
		if(v[i]==num)
		{
			v[i]=v[*quant-1];
			(*quant)--;
		}
		else
		{
			i++;
		}
	}
}
