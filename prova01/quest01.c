//soma dos termos de fibonacci pares sem que o último termo exceda 4 milhões
#include <stdio.h>
int main(){
    long acu,aux,termo_velho,termo_novo;
    termo_velho=0;
    acu=0;
    termo_novo=1;
    while(termo_velho<4000000)
    {
        if(termo_velho%2==0)//se o termo velho eh par, eh somado na acumuladora
        {
            acu+=termo_velho;
        }
        aux=termo_novo;
        termo_novo+=termo_velho;
        termo_velho=aux;
        

    }
    printf("%ld",acu);    


    
    return 0;
}
/*
    for(cont=0;cont<limite;cont++){
        aux=termo_novo;
        termo_novo+=termo_velho;
        termo_velho=aux;
        printf("%ld",termo_velho);
    }
*/