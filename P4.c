#include <stdio.h>
int main()
{
	int conv=0, cum=0, j=0;
	char numero[256];
	printf("Digite numeros e letras para que as letras sejam retiradas: ");
	scanf("%s", numero);
	getchar();
	for (j=0; numero[j]; i++)
	{
		if ((numero[j]-'0')>=0 && (numero[j]-'0')<=9)
			cum=cum*10+(numero[j]-'0');
		else;
	}
	printf("%j", cum);
	return 0;
}