#include <stdio.h>
#include <stdlib.h>
int main(){
int i=0, j=1, *p_i = &i, *p_j = &j, troca;
    troca = *p_i;
    *p_i = *p_j;
    *p_j = troca;
    printf("%i  %i", i ,  j);

return 0;
}
