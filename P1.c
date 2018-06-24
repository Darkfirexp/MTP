#include <stdio.h>
	
int main ()
{
	int est = 0, n = 0;
	char bits [256];
	printf ("\nInsira um numero em binario: ");
	scanf ("%s", bits);
			
	while(bits[n]!='\0')
	{
		if(bits[n]=='0')
		{
			if(est==0)
				est=0;
			else
			{
				if(est==1)
					est=2;
				else
				{
					if (est==2)
						est=1;
				}
			}	
		}	
		if(bits[n]=='1')
		{
			if(est==0)
				est=1;
			else
			{
				if(est==1)
					est=0;
				else
				{
					if(est=2)
						est=2;
				}
				
			}
		}
		n++;
	}
	
	if (est==0)
		printf("\nO numero e multiplo de 3...",bits);
	if (est!=0)
		printf("\nO numeronao eh multiplo de 3...", bits);

	return 0;

}