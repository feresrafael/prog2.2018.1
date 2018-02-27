#include <stdio.h>
int menu()
{
	int opc;
	printf("\n************");
	printf("\nCalculadora");
	printf("\n************");
	printf("\n1-Somar");
	printf("\n2-Subtrair");
	printf("\n0-Sair");
	printf("\n************");
	printf("\nEscolha a opcao");
	scanf("%d", &opc);
	while(opc!=0 || opc!=1 || opc!=2)
	{
		printf("\nEscolha a opcao");
	scanf("%d", &opc);
	}
	return opc;
	
}
int main()
{
	int m;
	m=menu();
	printf("\nOpcao escolhida igual a:%d",m);
	return 0;
}
