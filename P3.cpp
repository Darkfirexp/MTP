#include <stdio.h>

void mostrabits(unsigned int valor, int tamanho) 
{
	if(tamanho != 0) 
	{
	mostrabits(valor/2, tamanho-1);
	printf("%d", (valor%2));
	}	
}
int main()
{
	int aux, x, y, r;
	printf("Menu da Calculadora\n\n");
	printf("1. Not\n2. And\n3. Or\n4. Xor\n5. Right Shift\n6. Left Shift\n\n");
	scanf("%d", &aux);
	if(aux == 1)
	{
	printf("\nDigite um valor: ");
	scanf("%d", &x);
	getchar();
	printf("\nNot %d", x);
	printf("(");
	mostrabits(x, 32);
	printf(")");
	r=~x;
	printf(" : %d", r);
	printf("(");
	mostrabits(r, 32);
	printf(")");
	}
	else if (aux == 2)
	{
	printf("\nDigite um valor: ");
	scanf("%d", &x);
	getchar();
	printf("\n\nDigite um outro valor: ");
	scanf("%d", &y);
	getchar();
	printf("\n\n%d", x);
	printf("(");
	mostrabits(x, 32);
	printf(")");
	printf(" And %d", y);
	printf("(");
	mostrabits(y, 32);
	printf(")");
	r=x&y;
	printf(" : %d", r);
	printf("(");
	mostrabits(r, 32);
	printf(")");
	}
	else if ( aux == 3)
	{
	printf("\n\nDigite um valor: ");
	scanf("%d", &x);
	getchar();
	printf("\n\nDigite outro valor: ");
	scanf("%d", &y);
	getchar();
	printf("\n\n%d", x);
	printf("(");
	mostrabits(x, 32);
	printf(")");
	printf(" Or %d", y);
	printf("(");
	mostrabits(y, 32);
	printf(")");
	r=x|y;
	printf(" : %d", r);
	printf("(");
	mostrabits(r, 32);
	printf(")");
	}
	else if ( aux == 4)
	{
	printf("\n\nDigite um valor: ");
	scanf("%d", &x);
	getchar();
	printf("\n\nDigite ym outro valor: ");
	scanf("%d", &y);
	getchar();
	printf("\n\n%d", x);
	printf("(");
	mostrabits(x, 32);
	printf(")");
	printf(" Xor %d", y);
	printf("(");
	mostrabits(y, 32);
	printf(")");
	r=x^y;
	printf(" : %d", r);
	printf("(");
	mostrabits(r, 32);
	printf(")");
    } 
	else if ( aux == 5)
	{
	printf("\n\nDigite um valor: ");
	scanf("%d", &x);
	getchar();
	printf("\n\nDigite um outro valor: ");
	scanf("%d", &y);
	getchar();
	printf("\n\n%d", x);
	printf("(");
	mostrabits(x, 32);
	printf(")");
	printf(" >> %d", y);
	printf("(");
	mostrabits(y, 32);
	printf(")");
	r=x>>y;
	printf(" : %d", r);
	printf("(");
	mostrabits(r, 32);
	printf(")");
	}
	else if( aux == 6)
	{
	printf("\n\nDigite um valor: ");
	scanf("%d", &x);
	getchar();
	printf("\n\nDigite outro valor: ");
	scanf("%d", &y);
	getchar();
	printf("\n\n%d", x);
	printf("(");
	mostrabits(x, 32);
	printf(")");
	printf(" << %d", y);
	printf("(");
	mostrabits(y, 32);
	printf(")");
	r=x<<y;
	printf(" : %d", r);
	printf("(");
	mostrabits(r, 32);
	printf(")");
	}
	return 0;
}

