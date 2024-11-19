//considerando que MDC(a,b)*MMC(a,b)=|A*B|
#include <stdio.h>
int mdc(int a, int b) {
    int a,b,aux;
    if(b>a){
        aux=a;
        a=b;
        b=aux;
        }
//agora independente dos valores de a e b, a>b
    if(b==0){
        return a;
    }else{
//mdc(a,b)=mdc(b,a%b)
        while(b!=0){
            aux = a % b;
            a = b;
            b = aux;
        }
        return a;
    }
}

int main(){
    int a,b,mmc;
    printf("digite um valor para A\n");
    scanf("%d",&a);
    printf("digite um valor para B\n");
    scanf("%d",&b);
    mmc=a*b/mdc(a,b);
    printf("o MDC(a,b) eh igual a %d\n",mmc);
    return 0;
}