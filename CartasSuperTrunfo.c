#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main(){
     /*CARTA 01*/
    char estado[20];
    char cdg[20];
    char nome[20];
    int populacao;
    float area;
    float pib;
    int pontost;
    /*CARTA 02*/
    char estado2[20];
    char cdg2[20];
    char nome2[20];
    int populacao2;
    float area2;
    float pib2;
    int pontost2;

    printf("qual sera o estado?:\n");
    scanf("%s",estado);

    printf("qual o codigo de sua carta?\n");
    scanf("%s",cdg);

    printf("qual o nome de sua cidade?\n");
    scanf("%s",nome);

    printf("digite a quantidade de população da sua cidade:\n");
    scanf("%d",&populacao);

    printf("qual a area da sua cidade:\n");
    scanf("%f",&area);

    printf("qual o pib da sua cidade:\n");
    scanf("%f",&pib);

    printf("quantidade de pontos turisticos da sua cidade:\n");
    scanf("%d",&pontost);

    printf("qual sera o estado?:\n");
    scanf("%s",estado2);

    printf("qual o codigo de sua carta?\n");
    scanf("%s",cdg2);

    printf("qual o nome de sua cidade?\n");
    scanf("%s",nome2);

    printf("digite a quantidade de população da sua cidade:\n");
    scanf("%d",&populacao2);

    printf("qual a area da sua cidade:\n");
    scanf("%f",&area2);

    printf("qual o pib da sua cidade:\n");
    scanf("%f",&pib2);

    printf("quantidade de pontos turisticos da sua cidade:\n");
    scanf("%d",&pontost2);
    
    printf("Carta 01:\n Estado:%s\n Código:%s\n Nome da Cidade:%s\n População:%d\n Area:%fkm²\n PIB:%fR$\n Pontos Turisicos:%d\n",estado,cdg,nome,populacao,area,pib,pontost);
    printf("Carta 02:\n Estado:%s\n Código:%s\n Nome da Cidade:%s\n População:%d\n Area:%fkm²\n PIB:%fR$\n Pontos Turisicos:%d\n",estado2,cdg2,nome2,populacao2,area2,pib2,pontost2);



}


}
