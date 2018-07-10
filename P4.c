//Aluno: Yuri Sousa Bastos Weber   Matricula: 11711EAU015

#include <stdio.h>
int main()
{
	int sel=0, i=0;
	char num[256];
	printf("Digite uma sequencia de caracteres numericos: ");
    scanf("%s", num);
	getchar();
	for (i=0; num[i]; i++)
	{

		if ((num[i]-'0')>=0 && (num[i]-'0')<=9)

			sel=sel*10+(num[i]-'0');

		else;
	}
	printf("%i", sel); 
	return 0;
}
