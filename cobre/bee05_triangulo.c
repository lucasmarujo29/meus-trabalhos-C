#include <stdio.h>

int main(){
    double a,b,c,maior,menor1,menor2;
    scanf("%lf %lf %lf",&a,&b,&c);
//dois menores lados > maior lado
//a é maior
    if(a>=b&&a>=c){
        maior=a;
        menor1=b;
        menor2=c;
    }
//b é maior
    else if(b>=a&&b>=c){
        maior=b;
        menor1=a;
        menor2=c;
    }
//c é maior
    else if(c>=b&&c>=a){
        maior=c;
        menor1=a;
        menor2=b;
    }
//agora o bagulho eh serio
    if((menor1+menor2)>maior){
        //eh triangulo
        printf("Perimetro = %.1lf\n",(a+b+c));
    }
    else{
        printf("Area = %.1lf\n",(((a+b)*c)/2.0));
    }
return 0;
}
