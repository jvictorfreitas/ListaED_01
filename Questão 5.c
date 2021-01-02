#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct ponto{
    float x;
    float y;
};
typedef struct ponto ponto;

float dist(ponto p1,ponto p2){
    return sqrt( pow(p1.x - p2.x, 2) + pow(p1.y - p2.y,2) );
}



int main()
{
    ponto p[5];
    ponto pMenor, pMaior;
    float  dMenor, dMaior, distancia;

    for(int i = 0; i<5; i++){ // preenchendo o vetor

    printf("Digite os pontos x e y: \n");
    scanf("%f %f", &p[i].x, &p[i].y);
//i=2
    if(i>0){
        distancia = dist(p[0],p[i]);
        printf("Distancia: %.2f \n", distancia);

        if(i==1){
        dMaior = dist(p[0],p[i]);
        dMenor = dist(p[0],p[i]);
        pMaior.x = p[i].x;
        pMaior.y = p[i].y;
        pMenor.x = p[i].x;
        pMenor.y = p[i].x;
        }
        if(dMaior<distancia){
            pMaior.x = p[i].x;
            pMaior.y = p[i].y;
        }
        if(dMenor>distancia){
            pMenor.x = p[i].x;
            pMenor.y = p[i].x;
        }
    }
}
    printf("Ponto com a distancia maior: %.2f %.2f\n", pMaior.x, pMaior.y);
    printf("Ponto com a distancia menor: %.2f %.2f\n", pMenor.x, pMenor.y);
    return 0;
}
