/*
leia um conjunto não determinado de pares de valores M e N (para quando algum dos valores for menor ou igual a zero)
Para cada par lido, mostre a sequencia do menor até o maior e a soma dos inteiros consecutivos entre eles (incluindo N e M)
exemplo:
5 2 -> 2 3 4 5 Soma=14
6 3 -> 3 4 5 6 Soma=18
5 0 -> Terminar programa
*/
#include<stdio.h>
int main(){
    int m,n,soma;
    printf("digite um valor para M e outro para N (com um espaco entre eles)\n");
    scanf("%d %d",&m,&n);
    while(m>0&&n>0){
        if(m>n){
            for(soma=0;n<=m;n++){
                printf("%d ",n);
                soma+=n;
            }
            printf("Soma=%d\n",soma);
        }
        else if(n>m){
            for(soma=0;m<=n;m++){
                printf("%d ",m);
                soma+=m;
            }
            printf("Soma=%d\n",soma);
        }else if(m==n){
            printf("valores iguais\n");
        }
        printf("digite um valor para M e outro para N (com um espaco entre eles)\n");
        scanf("%d %d",&m,&n);
    }
    return 0;
}