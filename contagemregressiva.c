#include <stdio.h>

void contagem_regressiva(int start, int fim)
{
	int i;
	for(i=start;i>fim;i--)
	    printf("\n%d",i);
	    printf("\nBoom!!!");
	    
}
float soma(float num1, float num2)
{
	printf("Insira num1 e num2:");
	scanf("\n%f", &num1);
	scanf("\n%f", &num2);
	return (num1+num2);
}
int main()
{
	float n1,n2;
	float res=n1+n2;
	contagem_regressiva(10,2);
	contagem_regressiva(5,3);
	contagem_regressiva(8,4);
	res=soma(n1,n2);
		printf("O resultado da soma e:%f",res);
	return 0;
}
