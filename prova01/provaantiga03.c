#include <stdio.h>
int fatorial(int num){
    int acu=1;
    for(int i=1;i<=num;i++){
        acu*=i;
    }
    return acu;
}
int main(){
    int x;
    printf("digite o valor de x\n");
    scanf("%d",&x);
    x=fatorial(x);
    printf("o fatorial eh igual a: %d",x);
    return 0;
}