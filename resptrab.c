#include <stdio.h>
#include <string.h>

int main(){
    char um[10], dois[10];
    printf("Digite o primeiro nome: ");
    scanf("%s",&um);
    printf("Digite o segundo nome: ");
    scanf("%s",&dois);

    if(!(strcmp(um, dois)))
        printf("Sao iguais.");
    else
        printf("Sao diferentes.");

    return(0);
}
