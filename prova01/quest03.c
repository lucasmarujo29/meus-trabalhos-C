//exercicio da aula 07 slide 25
#include<stdio.h>
int main(){
    int cont1,n,termo2,termo1,maiortermo,posicaomaior,maior,cont2;
    cont2=1;
    posicaomaior=1;
    printf("Digite o valor de N: ");
    scanf("%d",&n);
    printf("\nDigite o %do valor: ",cont2);
    scanf("%d",&termo1);
    for(cont1=1;cont1<n;cont1++){
        cont2++;
        printf("\nDigite o %do valor: ",cont2);
        scanf("%d",&termo2);
        if(termo2>termo1){
            maiortermo=termo2;
            posicaomaior=cont2;
        }else{
            maiortermo=termo1;
        }
        termo1=maiortermo;
    }
    printf("\nO maior valor informado foi %d na posicao %d",maiortermo,posicaomaior);
return 0;
}