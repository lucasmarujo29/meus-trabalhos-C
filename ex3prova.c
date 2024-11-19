#include <stdio.h>
#include <stdbool.h>

bool eh_primo(int n){
    int contador=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            contador++;
        }
    }
    if(contador==2){
        return true;
    } else{return false;}
}
int main(){
    int N;
    scanf("%d",&N);
    if(eh_primo(N)){
        printf("Primo");
    } else{ printf("Nao eh primo");}
}