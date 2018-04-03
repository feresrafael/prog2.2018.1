#include <stdio.h>

void exclamacao(int *n){
    int i = 0, j, k = 1;
    while(i != *n){
        for(j = 0;j < k; ++j){
            printf("!");
            }
            if(j == k){
                k++;
                printf("\n");
        }i++;
    }
}

int main(void){
    int num;
    printf("Digite um numero inteiro e positivo: ");
    scanf("%d",&num);

    exclamacao(&num);
    return 0;
}
