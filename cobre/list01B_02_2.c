#include <stdio.h>
int invert(int n);
int cont_digits(int n);
//INVERTER
int invert(int n){
    int invertido,n_digits;
    n_digits=cont_digits(n);
//agora que tenho o número de dígitos, posso invertê-lo
    invertido=0;
    for(n_digits;n_digits>0;n_digits--){
        invertido=invertido*10+(n%10);
        n/=10;
    }
    return invertido;//n está invertido    
}
//CONTA DÍGITOS
int cont_digits(int n){
    int i;
    if(n==0){
        return 1;
    }
    for(i=0;n>0;n/=10){
        i++;
    }
    return i;
}
//VERIFICADOR
int main(){
    int n;
    for(n=1;n<=10000;n++){
        if(n==invert(n)){
            printf("%d\n",invert(n));
        }
    }
//como verificar se um número é palíndromo:
//ver se o inverso dele é igual a ele mesmo
//se x = xinverso -> é palíndromo
return 0;
}





//FUNÇÃO INVERT
//problema: pegar um número n e invertê-lo
//passo 1-> verificar quantos digitos ele tem -> FUNÇÃO NOVA
