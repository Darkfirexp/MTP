#include <stdio.h>

int main(){
	int est = 0, i = 0;
    char bits[256];
    printf("Digite um numero que seja binario: \n");
    scanf("%s", bits);
    while(bits[i] != '\0'){
        if (est == 0 && bits[i] == '0'){
    est = 0;
    i++;
	}
    if (est == 0 && bits[i] == '1'){
    est = 1;
    i++;
    }
    if (est == 1 && bits[i] == '0'){
    est = 2;
    i++;
    }
    if (est == 1 && bits[i] == '1'){
    est = 0;
    i++;
    }
    if (est == 2 && bits[i] == '0'){
    est = 1;
    i++;
    }
    if (est == 2 && bits[i] == '1'){
    est = 2;
    i++;
    }
	}
	if (est == 0){
	printf("\nO numero binario eh: %s", &bits);
	printf("\nO numero eh multiplo de 3.");
	}
	else{
	printf("\nO numero binario eh: %s", &bits);
	printf("\nO numero nao eh multiplo de 3.");
	}
	return 0;
	
}