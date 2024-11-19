//Faça um programa em que, dado um número inteiro N, escreva o maior divisor de
//N que é uma potência de um dos números primos fatorados. 
/*
dividindo o problema em partes menores e mais fáceis (DESCARTES)
1. ler número
2. fatorar(?)
    maior divisor que é potência de um mesmo primo:
    2.1 testar divisores
    2.2 verificar qual é o maior divisor -> se é primo = top
    se não for -> verificar se é uma potência de primos, podendo ser qualquer potência (quadrada, cúbica...)
qunatidade de funções:
main; primo; potência
FUNÇÃO: pega o número N, vai dividindo achando seus fatores, achou um divisor:
    pega o N e divide o quanto possível por esse mesmo divisor, salva essa potência
    de primo e guarda numa auxiliar, se for maior doq o valor da auxiliar de antes
*/
#include <stdio.h>
int teste(int n){
    int maior_pot_primo,div;
    maior_pot_primo=1;div=2;
    while(div<=n){
        int aux1=1;
        while(n%div==0){
            n/=div;
            aux1*=div;
        }
        if(aux1>maior_pot_primo){
            maior_pot_primo=aux1;
        }
        div++;
    }
    if(n>1&&n>maior_pot_primo){
        maior_pot_primo=n;
    }
return maior_pot_primo;
}
int main(){
    int n;
    printf("digite um número inteiro positivo\n");
    scanf("%d",&n);
    printf("o maior divisor de N (%d) que eh uma potencia de primos: %d\n",n,teste(n));
return 0;
}