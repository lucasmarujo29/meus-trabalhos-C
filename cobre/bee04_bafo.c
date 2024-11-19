#include <stdio.h>
int main() {
    int acu,n_rodadas,aldo,beto,aux,n_testes;
    n_testes=0;
    do{
        acu=0;
        scanf("%d",&n_rodadas);
        aux=n_rodadas;
        if(n_rodadas==0){break;}
        n_testes++;
        printf("Teste %d\n",n_testes);
        for(;aux>0;aux--){
            scanf("%d %d",&aldo,&beto);
            acu=acu+(aldo-beto);
        }
        if(acu>0){
                printf("Aldo\n");
            }
            else{
                printf("Beto\n");
            }
        printf("\n");

    }while(n_rodadas>0);

    return 0;
}