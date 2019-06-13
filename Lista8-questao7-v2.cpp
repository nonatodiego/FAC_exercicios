#include <stdio.h>

int questao07 (float v[], int *quant, float  num)
{
	int i=0;
	while (i< *quant)
	{
		if(v[i]==num)
		{
			for(p=i+1;p<*quant,p++)
			{
				v[p-1] = v[p];				
			}
			(*quant)--;
		}
		else
		{
			i++;
		}		
	}
}
