#include <stdio.h>
#include <stdlib.h>
lerVetor (int *x, int n){
    for(int i=0; i<n; i++){
        printf("Digite um Numero: ");
        scanf("%i",&x[i]);
    }
}

int main()
{
    int i, num, *ptr = &num;
    printf("Digite o Tamanho do vetor: ");
    scanf("%i", &num);
    ptr = malloc(num*sizeof(int));
    lerVetor(ptr,num);//função para ler o vetor]

    for(i=0; i<num; i++)
        printf( "%i \n", ptr[i]);

    free(ptr);
    ptr = NULL;
    return 0;
}

