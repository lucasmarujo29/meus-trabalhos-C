#include <stdio.h>
int verifyprimo(int x){
    //se x eh primo retorna x se x nao eh primo retorna 1(?)
    int aux,contadora;
    aux=2;
    contadora=0;
    while(aux<x){
        if(x%aux==0){
            contadora++;
        } aux++;
    }
    if(contadora==0){
        return x;
    } else {
        return 1;
    }
}



int main(){
    int a,b,cont;
    int primo=1;
    int mmc=1;
    printf("digite um valor para A:\n");
    scanf("%d",&a);
    printf("digite um valor para B:\n");
    scanf("%d",&b);
    while(a>1&&b>1){
        while(a%(verifyprimo(cont))!=0&&b%(verifyprimo(cont))!=0){
            cont=primo;
            primo=verifyprimo(cont);
            if(a%primo==0&&b%primo==0){
                mmc*=primo;
                a/=primo;
                b/=primo;
            }
            else{
                if(a%primo==0){
                mmc*=primo;
                a/=primo;
                }else if(b%primo==0){
                mmc*=primo;
                b/=primo;
                }
            }
            primo=cont+1;
        }
    }
    printf("\no mmc de A e B eh igual a: %d",mmc);
return 0;
}