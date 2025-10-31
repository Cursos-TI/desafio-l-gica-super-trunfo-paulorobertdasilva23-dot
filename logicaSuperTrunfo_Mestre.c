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
  int atributo1, resultado1;
  float exibir_atributo1_valor1, exibir_atributo1_valor2;



//variáveis para armazenar os valores da carta 2
  int numero_carta2 = 02;
  int pontos_turisticos2 = 24;
  int pop2 = 12341;
  char UF2[3] = "CE";
  char codigo_carta2[5] = "CE02"; 
  char cidade2[30] = "Maraponga";
  float area2 = 12131;
  float pib2 = 45646;
  int atributo2, resultado2;
  float exibir_atributo2_valor1, exibir_atributo2_valor2;
    

  

// Área de cálculos

// Cálculo do PIB per capita e densidade populacional das carta  1 e 2

  float dens_pop1 = pop1/area1;
 

  float dens_pop2 = pop2/area2;
  

// Menu para escolha dos atributos

    printf("///   ***Bem vindo ao super trunfo ***   ///\n\n");
    printf("Escolha qual atributo quer comparar \n\n");
    printf("1 -> População \n");
    printf("2 -> Área \n");
    printf("3 -> PIB \n");
    printf("4 -> Pontos turisticos \n");
    printf("5 -> Densidade demográfica \n");

        scanf("%d", &atributo1);
    switch (atributo1)
    {

case 1:

    printf("Você escolheu população \n\n");
    resultado1 = pop1 > pop2 ? 1:0;
    exibir_atributo1_valor1 = pop1;
    exibir_atributo1_valor2 = pop2;


    break;

case 2:

    printf("Você escolheu área \n\n");
    resultado1 = area1 > area2 ? 1:0;
    exibir_atributo1_valor1 = area1;
    exibir_atributo1_valor1 = area2;

    break;

case 3:

    printf("Você escolheu PIB \n\n");
    resultado1 = pib1 > pib2 ? 1:0;
    exibir_atributo1_valor1 = pib1;
    exibir_atributo1_valor2 = pib2;

    break;

case 4:

    printf("Você escolheu ponotos turisticos \n\n");
    resultado1 = pontos_turisticos1 > pontos_turisticos2 ? 1:0;
    exibir_atributo1_valor1 = pontos_turisticos1;
    exibir_atributo1_valor2 = pontos_turisticos2;

    break;

case 5:

    printf("Você escolheu densidade demográfica \n\n");
    resultado1 = dens_pop1 < dens_pop2 ? 1:0;
    exibir_atributo1_valor1 = dens_pop1;
    exibir_atributo1_valor2 = dens_pop2;

    break;

    
    default:

    printf("Escolha uma opção válida");

    break;
    }    


   
    printf("Escolha o segundo atributo que quer comparar \n\n");
    printf("1 -> População \n");
    printf("2 -> Área \n");
    printf("3 -> PIB \n");
    printf("4 -> Pontos turisticos \n");
    printf("5 -> Densidade demográfica \n");

        scanf("%d", &atributo2);        

        if(atributo1 == atributo2){

    printf("Você escolheu o mesmo atributo\n\n");

        }


    switch (atributo2)
    {

case 1:

    printf("Você escolheu população\n\n");
    resultado2 = pop1 > pop2 ? 1:0;
    exibir_atributo2_valor1 = pop1;
    exibir_atributo2_valor2 = pop2;

    break;

case 2:

    printf("Você escolheu área\n\n");
    resultado2 = area1 > area2 ? 1:0;
    exibir_atributo2_valor1 = area1;
    exibir_atributo2_valor2 = area2;

    break;

case 3:

    printf("Você escolheu PIB\n\n");
    resultado2 = pib1 > pib2 ? 1:0;
    exibir_atributo2_valor1 = pib1;
    exibir_atributo2_valor2 = pib2;

    break;

case 4:

    printf("Você escolheu ponotos turisticos \n\n");
    resultado2 = pontos_turisticos1 > pontos_turisticos2 ? 1:0;
    exibir_atributo2_valor1 = pontos_turisticos1;
    exibir_atributo2_valor2 = pontos_turisticos2;

    break;

case 5:

    printf("Você escolheu densidade demográfica \n\n");
    resultado2 = dens_pop1 < dens_pop2 ? 1:0;
    exibir_atributo2_valor1 = dens_pop1;
    exibir_atributo2_valor2 = dens_pop2;

    break;

    
    default:

    printf("Escolha uma opção válida");

    break;
    }    

//Área para exibição dos resultados

        
    printf("carta %d -> %.1f \n", numero_carta1, exibir_atributo1_valor1);
    printf("carta %d -> %.1f \n\n", numero_carta2, exibir_atributo2_valor2);
    
        if (resultado1 > resultado2) {

    printf("Carta %d Venceu!! \n", numero_carta1);
        
}   else if (resultado1 < resultado2){
    printf("Carta %d Venceu!! \n", numero_carta2);


}


    
return 0;
} 

