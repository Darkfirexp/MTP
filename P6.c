//Aluno: Yuri Sousa Bastos Weber   Matricula: 11711EAU015

#include <stdio.h>
int snum(int vet[20], int x) 
	{

        int p;
	    if (x == 0) return 0;
	    else{
		      p = snum(vet, x-1);

		      if (vet[x-1] > 0)

			  	{
				  p += vet[x-1];
				} 
		      return (p);

			}
	}
float med(int snum, float j)
	{
		float r;
		r = snum/j;
		return r;
	}

int main()
	{
		int vet[20],a,soma,quant;
		float j;
		printf("Quantidade de numeros ");
		scanf("%d", &quant);
        for(a=0; a<quant; a++)
		{
			printf("\n %d numero: ", a+1);
			scanf("%d", &vet[a]);
			getchar();
			if(vet[a] != 0) 
			j++;
		}
		soma = (snum (vet, a) );
		printf("\nA media dos numeros digitados sera igual a: %f",med(soma, j));
		
		return 0;

		}
