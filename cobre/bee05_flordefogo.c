/*
entra com caçador: raio, coordenada do centro
          flor: raio, coordenada do centro
          TUDO EM SEGUIDA - 6 variaves
se deu bom = RICO
se deu bom = ruim
ou faço tudo na main ou crio uma função int compara
que retorna 0 se deu ruim e 1 se deu bom
*/
#include <stdio.h>
#include <math.h>
int main(){
    float rc,xc,yc,rf,xf,yf;
    float distc;
    while(scanf("%f %f %f %f %f %f",&rc,&xc,&yc,&rf,&xf,&yf)!=EOF){
        distc = sqrt(pow(xc-xf,2)+pow(yc-yf,2));
        if(distc<=rc-rf){
            printf("RICO\n");
        }else{
            printf("MORTO\n");
        }
    }
    return 0;
}

/*
opção 2
#include <stdio.h>
#include <math.h>
int main(){
    float rc,xc,yc,rf,xf,yf;
    float distc;
    scanf("%f %f %f %f %f %f",&rc,&xc,&yc,&rf,&xf,&yf);
    do{
        distc = sqrt(pow(xc-xf,2)+pow(yc-yf,2));
        if(distc<=rc-rf){
            printf("RICO\n");
        }else{
            printf("MORTO\n");
        }
    }while(scanf("%f %f %f %f %f %f",&rc,&xc,&yc,&rf,&xf,&yf)!=EOF);
    return 0;
}
*/