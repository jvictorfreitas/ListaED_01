#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct data{
    int dia;
    int mes;
    int ano;
};struct data typedef data;
struct pessoa{
    char nome[30];
    data dataNasc;
};struct pessoa typedef pessoa;
void maisVelha(pessoa *p1, pessoa *p2){
    if(p1->dataNasc.ano == p2->dataNasc.ano)
        if(p1->dataNasc.mes == p2->dataNasc.mes)
            if(p1->dataNasc.dia == p2->dataNasc.dia)
                printf("Mesma idade");
            else
                if(p1->dataNasc.dia < p2->dataNasc.dia)
                    printf("%s", p1->nome);
                else
                    printf("%s", p2->nome);
        else
            if(p1->dataNasc.mes < p2->dataNasc.mes)
                printf("%s", p1->nome);
            else
                printf("%s", p2->nome);
    else
        if(p1->dataNasc.ano < p2->dataNasc.ano)
            printf("%s", p1->nome);
        else
            printf("%s", p2->nome);
}
void main(){
    pessoa p1, p2;
    printf("Digite o nome: ");
    scanf("%[^\n]s", &p1.nome);
    printf("Digite o dia que nasceu: ");
    scanf("%i",&p1.dataNasc.dia);
    printf("Digite o mes que nasceu: ");
    scanf("%i",&p1.dataNasc.mes);
    printf("Digite o ano que nasceu: ");
    scanf("%i",&p1.dataNasc.ano);

    printf("Digite o nome: ");
    scanf("%[^\n]s", &p2.nome);
    printf("Digite o dia que nasceu: ");
    scanf("%i",&p2.dataNasc.dia);
    printf("Digite o mes que nasceu: ");
    scanf("%i",&p2.dataNasc.mes);
    printf("Digite o ano que nasceu: ");
    scanf("%i",&p2.dataNasc.ano);

    maisVelha(&p1,&p2);
    return 0;
}
