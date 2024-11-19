#include <stdio.h>
int ehprimo(int candidato){
    for(int i=2;i<(candidato/2);i++){
        if(candidato%i==0){
            return 0;//nao eh primo
        }
        if(i%2!=0){
            i++;
        }
    }
    return 1;
}
int somaprimos(int limite){
    int acumuladora=0;
    for(int i=2;i<=limite;i++){
        if(ehprimo(i)){
            acumuladora+=i;
        }
        if(i%2!=0){
            i++;//ja que eu quero somar os primos, fodase os pares
        }
    }
    return acumuladora;
}
int main(){
    int limite,soma;
    printf("digite o limite pra soma de primos\n");
    scanf("%d",&limite);
    soma=somaprimos(limite);
    printf("a soma eh igual a: %d",soma);
    return 0;
}
