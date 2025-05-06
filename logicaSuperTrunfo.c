#include <stdio.h>

int main() {

//   Carta 01   //

// Variaveis Carta 01

char estado;
char codigo_carta[5];
char nome_cidade[20];
unsigned long int populacao;
float area;
float pib;
int pontos_turisticos;
float densidade_popu;
float pib_perca;
float superpoder;
int comparacao;

// printf e scanf da Carta 01, entrada dados
printf("Carta 01: \n");

printf("Digite o Estado da carta 01: \n");
scanf("%c",&estado);

printf("Digite o código da carta 01: \n");
scanf("%s",&codigo_carta);

printf("Digite o nome da cidade da carta 01: \n");
scanf("%s",&nome_cidade);

printf("Digite a população da carta 01: \n");
scanf("%u",&populacao);

printf("Digite a área da carta 01: \n");
scanf("%f",&area);

printf("Digite o Pib da carta 01: \n");
scanf("%f",&pib);

printf("Digite o número de pontos turísticos: \n");
scanf("%d",&pontos_turisticos);

// Divisão da população e Pib
densidade_popu = (float) populacao / pib;
pib_perca = (float) pib / populacao;

// Soma do Super Poder
superpoder = populacao + area + pib + pontos_turisticos + densidade_popu;

// printf de saída de dados da carta 01
printf("O Estado da carta 01 é: %c \n",estado);
printf("O Codígo da carta 01 é: %s \n",codigo_carta);
printf("O Nome da cidade da carta 01 é: %s \n",nome_cidade);
printf("A População da carta 01 é: %u \n",populacao);
printf("A Área da carta 01 é: %f ²KM \n",area);
printf("O Pib da carta 01 é: %f bilhões\n",pib);
printf("O número de Pontos turísticos da carta 01 é: %d \n",pontos_turisticos);
printf("A Densidade populacional da carta 01 é: %f \n",densidade_popu);
printf("O Pib per capita da carta 01 é: %f \n",pib_perca);
printf("O Super poder da carta 01 é: %f \n",superpoder);

//   Cartão 02   //

//Variáveis da carta 02
char estado2;
char codigo_carta2[5];
char nome_cidade2[20];
unsigned long int populacao2;
float area2;
float pib2;
int pontos_turisticos2;
float densidade_popu2;
float pib_perca2;
float superpoder2;

//printf e scanf da Carta 02, entrada dados
printf("Carta 02: \n");

printf("Digite o Estado da carta 01: \n");
scanf("%s",&estado2);

printf("Digite o codígo da carta 02: \n");
scanf("%s",&codigo_carta2);

printf("Digite o nome da cidade da carta 02: \n");
scanf("%s",&nome_cidade2);

printf("Digite a população da carta 02: \n");
scanf("%u",&populacao2);

printf("Digite a área da carta 02: \n");
scanf("%f",&area2);
 
printf("Digite o pib da carta 02: \n");
scanf("%f",&pib2);

printf("Digite o número de pontos turísticos da carta 02: \n ");
scanf("%d",&pontos_turisticos2);

// Divisão da população e Pib
densidade_popu2 = (float) populacao2 / pib2;
pib_perca2 = (float) pib / populacao2;

// Soma do Super Poder
superpoder2 = populacao2 + pib2 + area2 + pontos_turisticos2 + densidade_popu2;

// printf de saída de dados da carta 02
printf("O Estado da Carta 2 é: %c \n",estado2);
printf("o Codigo 02 é: %s \n",codigo_carta2);
printf("O Nome da Cidade 02 é: %s \n",nome_cidade2);
printf("A Popolação 02 é: %u \n",populacao2);
printf("A Área 02 é: %f km²\n",area2);
printf("O Pib 02 é: %f bilhões de reais \n",pib2);
printf("Os Números de Pontos Turisticos 02 são: %d \n",pontos_turisticos2);
printf("A Densidade populacional é:%f \n",densidade_popu2);
printf("O Pib per capita é:%f \n",pib_perca2);
printf("o Super poder é : %f \n",superpoder2);

// Switch para selecionar qual tributo comparar

printf("*** Comparação entre os atributos *** \n");
printf("Selecione o tributo que deseja comparar \n");
printf("1.População \n");
printf("2.Área \n");
printf("3.Pib \n");
printf("4.Densidade Populacional \n");
printf("5.Super Poder \n");
scanf("%d",&comparacao);

switch (comparacao)
{
case 1:
if (populacao > populacao2)
{
printf("População: Carta 01 (%s) venceu \n",nome_cidade);
} else if (populacao2 > populacao)
{
printf("População: Carta 02 (%s) venceu \n",nome_cidade2);
} else {
printf("*** empatou *** \n");
}
break;

case 2:
if (area > area2)
{
printf("A carta 01 (%s) venceu \n",area);
} else if (area2 > area)
{
printf("A Carta 02 (%s) venceu \n");
} else {
printf("*** empatou *** \n");
}
break;

case 3:
if (pib > pib2)
{
printf("Pib: Carta 01 (%s) venceu \n",nome_cidade);
} else if ( pib2 > pib)
{
printf("Pib: Carta 02 (%s) venceu \n",nome_cidade2);
} else {
printf("*** empatou *** \n");
}
break;

case 4:
if (densidade_popu < densidade_popu2)
{
printf("Densidade Populacional: Carta 01 (%s) venceu \n",nome_cidade);
} else if (densidade_popu2 < densidade_popu)
{
printf("Densidade Populacional: Carta 02 (%s) venceu \n",nome_cidade2);
} else {
printf("*** empatou *** \n");
}
break;

case 5:
if (superpoder > superpoder2)
{
printf("Super poder: Carta 01 (%s) venceu \n",nome_cidade);
} else if (superpoder2 > superpoder)
{
printf("Super poder: Carta 02 (%s) venceu \n",nome_cidade2);
} else {
printf("*** empatou *** \n");
}
break;

default:
printf("Opção inválida");
    break;
}
    return 0;
}
