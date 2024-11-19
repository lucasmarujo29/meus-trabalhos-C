//atv slide 65 aula 07
/*
se n = 6; escreve:
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
1 2 3 4 5 6
*/
#include <stdio.h>
int main() {
    int n;
    printf("digite o valor de n: ");
    scanf("%d", &n);
    for(int aux1=1;aux1<=n;aux1++){
        for(int aux2=1;aux2<=aux1;aux2++){
            printf("%d ", aux2);
        }
        printf("\n");
    }
return 0;
}