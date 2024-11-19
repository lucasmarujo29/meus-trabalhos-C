//exercicio da aula 07 slide 25
#include<stdio.h>
int main(){
    int cont,n,atual,anterior,aux;
    aux=0;
    printf("Digite o valor de N\n");
    scanf("%d",&n);
    printf("Digite um número\n");
    scanf("%d",&anterior);
    for(cont=1;cont<n;cont++){
        printf("Digite um número\n");
        scanf("%d",&atual);
        if(anterior>atual){
            aux++;
        }
        anterior=atual;
    }
    if(aux>0){
        printf("está desordenado\n");
    }else{
        printf("está ordenado\n");
    }
return 0;
}