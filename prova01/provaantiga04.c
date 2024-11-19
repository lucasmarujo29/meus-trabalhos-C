#include <stdio.h>
float val(float x,int n,float t);
int main(){
    float x,t;
    int n;
    printf("digite o valor de X\n");
    scanf("%f",&x);
    printf("digite o valor de N\n");
    scanf("%d",&n);
    printf("digite o valor de t\n");
    scanf("%f",&t);
    float resultado=val(x,n,t);
    printf("resultado = %f\n",resultado);
    return 0;
}
float val(float x,int n,float t){
    float acu=0;
    float denominador=1;
    for(int i=1;i<=n;i++){
        denominador*=1+t;
        acu+=x/denominador;
    }
    return acu;
}