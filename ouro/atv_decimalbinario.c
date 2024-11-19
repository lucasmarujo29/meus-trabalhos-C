//atv silde 41 aula 07
//recebo um número em decimal e tranformo em binário
#include <stdio.h>
int main(){
    int cont_pot,digito,soma,n;
    printf("Digite um numero em decimal\n");
    scanf("%d",&n);
    cont_pot=1;
    soma=0;
//logica do programa: cada resto da divisao por dois, retorna um digito do numero 
//em binario, da direita pra esquerda
    while(n!=0){
        digito=(n%2)*cont_pot;
        n/=2;
        soma+=digito;
        cont_pot*=10;
    }
    printf("O numero em binario eh %d",soma);
return 0;
}