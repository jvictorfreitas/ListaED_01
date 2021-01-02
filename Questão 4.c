#include <stdio.h>
#include <stdlib.h>
void permutar(char *p1, char *p2 ){
    char trocar;
    trocar = *p1;
    *p1 = *p2;
    *p2 = trocar;
}

int main(){
    int a = 0, b = 1;
    permutar(&a,&b);
    printf("a: %i b: %i", a, b);
    return 0;
}