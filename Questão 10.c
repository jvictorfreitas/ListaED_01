#include <stdio.h>
#include <stdlib.h>

void ordenar(int *vetor, int n, int x){
    vetor[n-1] = x;
    for(int i=0;i<n;i++){
        for(int j=0; j<n;j++){
            if(vetor[i] < vetor[j]){
                int troca = vetor[i];
                vetor[i]=vetor[j];
                vetor[j]=troca;
            }
        }
    }

}


void main(){
    int *vetor, n, x;

    printf("Digite o tamanho do vetor: ");
    scanf("%i", &n);

    vetor =(int*)malloc(n * sizeof(int));

    for(int i=0; i<n; i++){
        printf("Digite o %i numero: ",i+1);
        scanf("%i", &vetor[i]);
    }

    printf("digite um valor: ");
    scanf("%i",&x);
    n++;
    ordenar(vetor,n,x);

    for(int i=0; i<n; i++ )
        printf("%i\n",vetor[i]);


    free(vetor);
    vetor = NULL;
    return 0;
}
