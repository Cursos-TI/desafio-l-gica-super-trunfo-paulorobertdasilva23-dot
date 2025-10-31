#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.


    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio


     // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);



int main() {

// Área para definição das variáveis para armazenar as propriedades das cidades

//variáveis para armazenar os valores da carta 1
  int numero_carta1, pontos_turisticos1;
  char UF1[3];
  char codigo_carta1[6]; 
  char cidade1[30];
  float pop1, pib1, area1;
 


//variáveis para armazenar os valores da carta 2
  int numero_carta2, pontos_turisticos2 ;
  char UF2[3];
  char codigo_carta2[5]; 
  char cidade2[30];
  float pop2, area2, pib2;
  

  
// Área para entrada de dados
    


//Introdução do usuário ao jogo
   printf("Óla bem-vindo ao Super Trunfo, nosso jogo de cartas, aqui você irá cadastrar cartas de cidades brasileiras com informções desde seu o nome até seu pib se divirta!! \n\n");
  



//Armazenando o número da carta informado pelo usuário  
    printf("Escolha o número da carta: \n");
      scanf("%d", &numero_carta1 );
        getchar();
    
//Armazenando a UF informado pelo usuário   
    printf("Insira a UF onde a cidade se encontra: \n");
      scanf("%2s", UF1);
         getchar();
        
  
//Armazenando o código da carta informado pelo usuário
    printf("Insira o código da carta utilizando a UF do estado como no exemplo a seguir. Ex: CE01 Ceará \n");
      scanf("%5s", codigo_carta1);
        getchar();

//Armazenando o nome da cidade informado pelo usuário
    printf("Escolha a cidade: \n");
      scanf("%s", cidade1);
        getchar();

//Armazenando a população da cidade informado pelo usuário
    printf("Insira a população da cidade: \n");
      scanf("%f", &pop1);
        getchar();

//Armazenando a área da cidade informado pelo usuário
    printf("Insira a área da cidade: \n");
      scanf("%f", &area1);
        getchar();

//Armazenando o pib da cidade informado pelo usuário
    printf("Insira o pib da cidade: \n");
      scanf("%f", &pib1);
        getchar();
  
//Armazenando o pib da cidade informado pelo usuário
    printf("Insira a quantidade de pontos turísticos da cidade: \n");
      scanf(" %d", &pontos_turisticos1);



//Informando o usuário a repetir o processo para a próxima carta 

   printf("Agora que você já aprendeu como prencher sua carta repita o porcesso pra a segunda carta \n\n");





//Armazenando o número da carta informado pelo usuário  
    printf("Insira o número da carta: \n");
      scanf("%d", &numero_carta2 );
        getchar();
    
//Armazenando a UF informado pelo usuário   
    printf("Insira a UF onde a cidade se encontra: \n");
      scanf("%2s", UF2);
        getchar();
  
//Armazenando o código da carta informado pelo usuário
    printf("Insira o código da carta utilizando a UF do estado como no exemplo a seguir. Ex: CE01 Ceará \n");
      scanf("%5s", codigo_carta2);
        getchar();

//Armazenando o nome da cidade informado pelo usuário
    printf("Insira o nome da cidade: \n");
      scanf("%s", cidade2);
        getchar();

//Armazenando a população da cidade informado pelo usuário
    printf("Insira a população da cidade: \n");
      scanf("%f", &pop2);
        getchar();

//Armazenando a área da cidade informado pelo usuário
    printf("Insira a área da cidade: \n");
      scanf("%f", &area2);
        getchar();

//Armazenando o pib da cidade informado pelo usuário
    printf("Insira o pib da cidade: \n");
      scanf("%f", &pib2);
        getchar();
  
//Armazenando o pib da cidade informado pelo usuário
    printf("Insira a quantidade de pontos turísticos da cidade: \n");
      scanf("%d", &pontos_turisticos2);
        getchar();



// Área de cálculos

// Cálculo do PIB per capita e densidade populacional das carta  1 e 2

  float dens_pop1 = pop1/area1;
  float pib_per_capita1 = pib1/pop1;

  float dens_pop2 = pop2/area2;
  float pib_per_capita2 = pib2/pop2;

// Cálculo dos resultados
  float dens_pop_inv1 = 1 / dens_pop1;
  float dens_pop_inv2 = 1 / dens_pop2;


// Área para comparação de atributos e exibição dos resultados

printf("///       ***Comparação das cartas***       //// \n\n");

//Quando for comparar outros atributos a segunda variável nos dois printf abaixo pela variável escolhida

printf("Carta 1 -> %s: %.2f \n", cidade1, pop1);
printf("Carta 2 -> %s: %.2f \n\n", cidade2, pop2);

//Quando for comparar outros atributos troque a variável dentro da condição do IF abaixo 
//Obs: Se a variável escolhida for a densidade populacional troque o sinal de < pelo sinal de > dentro da condição do IF abaixo

if(pop1 > pop2){

    printf("Carta 1 venceu! %s \n", cidade1);

}else{

    printf("Carta 2 venceu! %s \n", cidade2);

}    


    

return 0;
} 
