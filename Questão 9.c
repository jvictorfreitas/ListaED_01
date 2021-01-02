#include <stdio.h>
#include <stdlib.h>
int fatorial(int n){
    if(n==0)
        return 1;
    return n*fatorial(n-1);
    }
int superFatorial(int n){
    if(n==1)
        return 1;
   return fatorial(n)+ superFatorial(n-1);
}

void main(){
    int n;
    printf("Digite n: ");
    scanf("%i", &n);
    printf("resultado: %i", superFatorial(n));

return 0;
}