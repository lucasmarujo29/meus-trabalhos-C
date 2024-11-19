//atv slide 26 aula 07
#include <stdio.h>
int main() {
    int m,n,aux;
    printf("Digite um valor pra M e outro pra N\n");
    scanf("%d %d",&m,&n);
    if(n>m){
        aux=m;
        m=n;
        n=aux;
        }
//agora independente dos valores de m e n, m>n
    if(n==0){
        printf("o mdc é %d",m);
    }else{
//mdc(m,n)=mdc(n,m%n)
        while(n!=0){
            aux = m % n;
            m = n;
            n = aux;
        }
        printf("o mdc é %d",m);
    }

    return 0;
}