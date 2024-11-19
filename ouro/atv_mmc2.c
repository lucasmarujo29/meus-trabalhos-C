//agora sem manha, calcularesmos o mmc por meio do método de decomposição simultânea de primos
#include <stdio.h>

int ehprimo(int candidato){
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
    int m,n;
    int mmc=1;
    printf("digite o valor de M\n");
    scanf("%d",&m);
    printf("digite o valor de N\n");
    scanf("%d",&n);
    for(int candidato=2;(m>1)||(n>1);candidato++){
        if(ehprimo(candidato)){
        //testa se o candidato eh primo
            while((m%candidato==0)||(n%candidato==0)){
            //loop para repeticoes de um primo como potencia ex.:8=2^3
                if((m%candidato==0)&&(n%candidato==0)){
                    //quando ambos são divisíveis pelo número
                    mmc*=candidato;
                    m/=candidato;
                    n/=candidato;
                }else{
                    if(m%candidato==0){
                        //quando apenas m eh divisivel
                        mmc*=candidato;
                        m/=candidato;
                }
                    if(n%candidato==0){
                        //quando apenas n eh divisivel
                        mmc*=candidato;
                        n/=candidato;
                    }
                }  
            }
        }
    }
    printf("o MMC de M e N eh igual a %d",mmc);
    return 0;
}
