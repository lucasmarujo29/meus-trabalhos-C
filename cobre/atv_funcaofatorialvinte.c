#include <stdio.h>
long fat(long n){
    long acu=1;
    long aux=n;
    for(int i=1;i<n;n--){
        acu=acu*n;
    }
return acu;
}
int main(){
    long n=20;
    while(n>0){
        printf("%ld! == %ld\n",n,fat(n));
        n--;
    }
}

