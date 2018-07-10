//Aluno: Yuri Sousa Bastos Weber   Matricula: 11711EAU015

#include <stdio.h>

int main () 
{
 int i = 0, est = 0;
 char bits[256];	
	
  printf ("\n Digite um numero binario para verificar a multiplicidade por 3: "); 
  scanf ("%s", &bits[i]);	
  while (bits[i] != '\0'){
      if (bits[i] != '0' && bits[i] != '1')	
{
     printf ("Error");
	 return 1;		 
}
if (est == 0 && bits[i] == '0')
	{
	 est = 0;		
	}
      else if (est == 0 && bits[i] == '1')
	{
	  est = 1;	
	}
       else if (est == 1 && bits[i] == '0')
	{
	  est = 2;	
	}
	 else if (est == 2 && bits[i] == '1')	
	{
	  est = est;	
	} 
      else if (est == 2 && bits[i] == '0')	
	{
	  est = 1;	
	}
      else if (est == 1 && bits[i] == '1')	
	{
	  est = 0;	
	}
else			
	{
	est = est;
}
i++;			
}
	  if (est == 0)
 {
     printf("O numero e de multiplicidade 3\n");
 }

 else 

 {
     printf("O numero nao e de multiplicidade 3");
 }

 return 0; 
}
