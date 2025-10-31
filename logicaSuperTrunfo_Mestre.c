#include <stdio.h>

int main() {

// Área para definição das variáveis para armazenar as propriedades das cidades

//variáveis para armazenar os valores da carta 1
 int numero_carta1 = 01;
  int pontos_turisticos1 = 10;
  int pop1 = 10000;
  char UF1[3] = "CE";
  char codigo_carta1[5] = "CE01"; 
  char cidade1[30] = "Maranguape";
  float area1 = 20000;
  float pib1 = 100000;
  int atributo1;


//variáveis para armazenar os valores da carta 2
  int numero_carta2 = 02;
  int pontos_turisticos2 = 24;
  int pop2 = 12341;
  char UF2[3] = "CE";
  char codigo_carta2[5] = "CE02"; 
  char cidade2[30] = "Maraponga";
  float area2 = 12131;
  float pib2 = 45646;
  int atributo2;

  

  

// Área de cálculos

// Cálculo do PIB per capita e densidade populacional das carta  1 e 2

  float dens_pop1 = pop1/area1;
 

  float dens_pop2 = pop2/area2;
  

// Menu para escolha dos atributos

    printf("///   ***Bem vindo ao super trunfo \n\n***   ///");
    printf("Escolha qual atributo quer comparar \n\n");
    printf("1 -> População \n");
    printf("2 -> Área \n");
    printf("3 -> PIB \n");
    printf("4 -> Pontos turisticos \n");
    printf("5 -> Densidade demográfica \n");

        scanf("%d", &atributo1);


    printf("///   ***Bem vindo ao super trunfo \n\n***   ///");
    printf("Escolha qual atributo quer comparar \n\n");
    printf("1 -> População \n");
    printf("2 -> Área \n");
    printf("3 -> PIB \n");
    printf("4 -> Pontos turisticos \n");
    printf("5 -> Densidade demográfica \n");

        scanf("%d", &atributo2);        

        if(atributo1 == atributo2){

    printf("Você escolheu o mesmo atributo");

        }

   switch (opcao) {


//população

case 1:
    printf("Carta 1 -> %s: População: %d \n", cidade1, pop1);
    printf("Carta 2 -> %s: População: %d \n\n", cidade2, pop2);

        if(pop1 > pop2){
    printf("Carta %d Venceu!", numero_carta1);

}
    else if(pop1 < pop2){
    printf("Carta %d Venceu!", numero_carta2);
}

    else{
        if(pop1 == pop2){
    printf("Empate!");
}
       
}

    break;



default:

    printf("Opção inválida, escolha uma das opcções acima.");
}

return 0;
} 
