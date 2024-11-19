#include <stdio.h>
int main() {

    int n_testes,n_depositos,deposito_joaozinho,deposito_zezinho,aux,acu;
    n_testes=0;
    acu=0;
    do{
        acu=0;
        scanf("%d",&n_depositos);
        aux=n_depositos;
        if(n_depositos==0){break;}
        n_testes++;
        printf("Teste %d\n",n_testes);
        for(;aux>0;aux--){
            scanf("%d %d",&deposito_joaozinho,&deposito_zezinho);
            acu=acu+((deposito_joaozinho)-(deposito_zezinho));
            printf("%d\n",acu);
        }
        printf("\n");

    } while (n_depositos!=0);


    return 0;
}