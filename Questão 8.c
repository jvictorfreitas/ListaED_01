#include <stdio.h>
#include <stdlib.h>
int fatorial(int n){
    if(n==0)
        return 1;
    return n*fatorial(n-1);
    }
float somaS(int n){
    if(n==1)
        return 1;
    if(n<=0)
        return 0;

   return (float)1/fatorial(n) + somaS(n-1);
}

void main(){
    int n;
    printf("Digite n: ");
    scanf("%i", &n);
    printf("resultado: %.2f", somaS(n));

return 0;
}