//Aluno: Yuri Sousa Bastos Weber   Matricula: 11711EAU015
#include <stdio.h>

int ackermann_function(int k, int l) 
{
    if (k == 0)
	{	
		return l+1;	
	}
	else if (k > 0 && l == 0)
	{
		return ackermann_function(k-1,1);	
	}
	else
	{
		return ackermann_function(k-1, ackermann_function(k,l-1));	
	}
}

int main()
{
	int k, n;
	printf("\nDigite o valor de k: ");
	scanf("%d", &m);
	printf("\nDigite o valor de l: ");
	scanf("%d", &n);
	printf("\nO resultado da funcao sera: %d", ackermann_function(k,l));
	return 0;
}
