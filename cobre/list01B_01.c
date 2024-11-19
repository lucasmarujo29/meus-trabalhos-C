#include <stdio.h>
int main(){
    double n,nx,cont,s,aux;
    printf("Digite um numero ate 50\n");
    scanf("%lf",&n);
    aux=n;
    nx=n-1;
    for(cont=1;cont<=aux;cont++){
        s+=(n*nx)/(cont);
        nx--;
        n--;
    }


    printf("o total foi: %lf\n",s);
return 0;
}
//nx = n-1
//numerador: SOMA DE:(fatorial de n até 2) + (fatorial de nx até 1)
//denominador: contadora até nx
/*     while(cont<n-1&&n>=2){
        s+=(n*nx)/(cont);
        cont++;
        n--;
        nx--;
        printf("%lf\n%lf\n%lf\n",&cont,&n,&nx);
    }
*/