//faça um programa que calcule a limite dos N primeiros termos da série de fibonacci
// 0    1   1   2    3   5   8  13  21
// 1°   2°  3°  4°   5°  6°  7° 8°  9°
#include <stdio.h>
int main(){
    long acu,aux,termo_velho,termo_novo,limite;
    termo_velho=acu=0;
    termo_novo=1;
    printf("digite o limite da soma da sequencia de fibonacci\n");
    scanf("%ld",&limite);
    do{
        aux=termo_novo;
        termo_novo+=termo_velho;
        termo_velho=aux;
        acu+=termo_velho;
    }while(acu+termo_velho<limite);
    printf("%ld",acu);
    return 0;
}

/*
for(acu=0;acu<limite;acu+=termo_velho){
        aux=termo_novo;
        termo_novo+=termo_velho;
        termo_velho=aux;
    }
*/