/*
qual o menor numero inteiro que possui a n_divis_maior quantidade de divisores entre 1 e 10.000?
quantos e quais são divisores?
implemente um programa que imprima a resposta

resposta: menor número 7560 com 64 divisores. exiba os divisores
1,2,3,4...3780,7560
*/
#include <stdio.h>
int listagem_divisores(int numero){
//pegar um número e listar seus divisores
    for(int i=1;i<numero;i++){
        if(numero%i==0){
            printf(" %d,",i);
        }
    }
    printf(" %d",numero);
    return 0;
}
int conta_divisores(int candidato){
//pegar um número e contar quantos divisores ele tem
    int acu=0;
    for(int i=1;i<=candidato;i++){
        if(candidato%i==0){
            acu++;
        }
    }
    return acu;
}
int main(){
//meu objetivo aqui eh achar qual o menor número com mais divisores
    int n_divis_maior,n_divis_x,nmr_maior,aux;
    int limite;
    n_divis_maior=nmr_maior=0;
    printf("digite o limite da busca\n");
    scanf("%d",&limite);
//para esse exercício limite = 10.000; 
    for(int x=1;x<=limite;x++){
        n_divis_x=conta_divisores(x);
        if(n_divis_x>n_divis_maior){
            n_divis_maior=n_divis_x;
            nmr_maior=x;
        }
    }
    printf("o maior numero eh %d\nseus %d divisores sao:\n",nmr_maior,conta_divisores(nmr_maior));
    listagem_divisores(nmr_maior);
return 0;
}