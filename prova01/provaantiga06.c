#include <stdio.h>
int ehprimo(int candidato){
    for(int i=2;i<(candidato/2);i++){
        if(candidato%i==0){
            return 0;//nao eh primo
        }
        if(i%2!=0){
            i++;
        }
    }
    return 1;
}
int fibonacci(int enesimo){
    int termo_velho,termo_novo;
    termo_velho=1;
    termo_novo=2;

}
int main(){
    int contadora;
    for(int i=1;
    return 0;
}