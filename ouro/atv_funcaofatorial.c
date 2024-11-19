#include <stdio.h>
long fat(long n){
    if(n<=0){
    return 1;
    }
    long acu=1;
    for(int i=1;i<n;n--){
        acu=acu*n;
    }
return acu;
}
int main(){
    printf("digite um numero\n");
    long n;
    scanf("%ld",&n);
    printf("%ld\n",fat(n));
}

