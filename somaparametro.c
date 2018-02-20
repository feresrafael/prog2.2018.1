#include <stdio.h>
float soma(float x, float y)
{
float result;	
	printf("Informe o valor de x e y:");
	scanf("%f", &x);
	scanf("%f", &y);
	result=x+y;
	printf("A soma e igual:%f",result);
	return (result);
}
int main()
{
float n1,n2,p;
 soma(n1,n2);
 return 0;
}
