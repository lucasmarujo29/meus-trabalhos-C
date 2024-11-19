#include <stdio.h>
int ehprimo(int candidato){
//essa funcao retorna verdadeiro para o número primo e falso para um número nao primo
    if(candidato<=1){
        return 0;
    }
    for(int cont=2;cont<candidato;cont++){
        if(candidato%cont==0){
            return 0;
        }
    } return 1;
}
int main(){
    int n,candidato,cont;
    printf("digite o valor de N\n");
    scanf("%d",&n);
    candidato=1;
    cont=0;
//para cada valor primo contadora recebe mais um, quando não é primo o candidato, o candidato aumenta até ser primo
    while(cont<n){
        candidato++;
        if(ehprimo(candidato)){
            cont++;
        }
    }
    printf("o %do termo primo eh igual a: %d\n",cont,candidato);
    return 0;
}