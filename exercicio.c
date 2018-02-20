#include <stdio.h>
int main()
{
	int numeros[10];
	int i,qmm=0;
	float media,soma=0;
	
	for(i=0;i<=9;i++)
	{
		printf("\nEntre com o numero:");
		scanf("%d", &numeros[i]);
		soma+=numeros[i];
		
			
	}
	//exibir na tela o maior valor lido
	media=soma/10;
	for(i=0;i<=9;i++)
	{
	    if(numeros[i]>media)
	       qmm++;
    }
	printf("%f",media);
	printf("%d",qmm);
	return 0;
	
}
