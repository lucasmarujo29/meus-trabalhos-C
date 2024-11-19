#include <stdio.h>
 
int main() {
    float x,aux,total_imposto;
    scanf("%f",&x);
    if(x<=2000.00){
        printf("Isento\n");
        return 0;
    }else if(2000.01<x&&x<=3000.00){
        total_imposto=((x-2000)*8/100);
    }else if(3000.00<x&&x<=4500.00){
        total_imposto=(80+((x-3000)*18/100));
    }else if(4500.00<x){
        total_imposto=(80+270+((x-4500)*28/100));
    }
    printf("R$ %.2f\n",total_imposto);
    return 0;
}