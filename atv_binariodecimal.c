//transformar um numero em binario para decimal
#include <stdio.h>
int main(){
    int n,digito,soma,pot;
    printf("Digite um numero em binario\n");
    scanf("%d",&n);
    soma=0;
    pot=1;
//lógica do programa: cada número do binario é uma potencia de dois
    while(n!=0){
        digito=n%10;
        n=n/10;
        soma=soma+(digito*pot);
        pot=pot*2;
    }
    printf("O valor em decimal é: %d\n",soma);

return 0;
}