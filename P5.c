//Aluno: Yuri Sousa Bastos Weber   Matricula: 11711EAU015

#include <stdio.h>
int main ()
{
    int x,y,D[64];
    char C [255];
    int* encod = (int*) C;
    char* decod = (char*) &D;
    
	printf("Escolha entre as opcoes: \n");
    printf("1-> Codificaçao\n");
    printf("2-> Decodificaçao\n");

    scanf("%d", &x);

    y=getchar();

    switch(x)
    {
    case 1:
        for(y=0;y<255;y++)

            C[y]=0;

        printf("\n->Digite uma string com o ate 255 caracteres\n");

        fgets(C,255,stdin);

        for(y=0;C[y]!=0;y++)

            if(C[y]==10){C[y]=0;}

        for(y=0;*(encod+y)!=0;y++)
            printf("%d ", *(encod+y));
        break;
        
    case 2:
        printf("\n-Digite um numero\n");
        for(y=0;y<64;y++)
        {
            scanf("%d", &D[y]);
            if(getchar()=='\n') 
            {
                break;
            }
        }
        for (y=0;*(decod+y)!=0;y++)
        printf("%c", *(decod+y));
    
        break;
    }
    return 0;

}
