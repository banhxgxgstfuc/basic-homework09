#include <stdio.h>
#include<stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int i,j;
	for(i=1;i<10;i++)
	{
		for(j=1;j<10;j++)
		{
			printf("%d*%d=%2d\t",i,j,i*j);
		}
	printf("\n");
	}
	return 0;
}
