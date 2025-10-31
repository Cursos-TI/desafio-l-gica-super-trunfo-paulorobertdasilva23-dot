#include <stdio.h>

int main() {

// Área para definição das variáveis para armazenar as propriedades das cidades

//variáveis para armazenar os valores da carta 1
  int numero_carta1, pontos_turisticos1, opcao, pop1;
  char UF1[3];
  char codigo_carta1[6]; 
  char cidade1[30];
  float pib1, area1;
 


//variáveis para armazenar os valores da carta 2
  int numero_carta2, pontos_turisticos2, pop2 ;
  char UF2[3];
  char codigo_carta2[5]; 
  char cidade2[30];
  float area2, pib2;
  

  
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
        scanf("%d", &pop1);
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
    printf("Insira a quantidade de pontos turisticos da cidade: \n");
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
        scanf("%d", &pop2);
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
    printf("Insira a quantidade de pontos turisticos da cidade: \n");
        scanf("%d", &pontos_turisticos2);
            getchar();



// Área de cálculos

// Cálculo do PIB per capita e densidade populacional das carta  1 e 2

  float dens_pop1 = pop1/area1;
 

  float dens_pop2 = pop2/area2;
  

// Menu interativo

    printf("Escolha qual atributo quer comparar \n\n");
    printf("1 -> População \n");
    printf("2 -> Área \n");
    printf("3 -> PIB \n");
    printf("4 -> Pontos turisticos \n");
    printf("5 -> Densidade demográfica \n");

        scanf("%d", &opcao);

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


//Área

case 2:
    printf("Carta 1 -> %s: Área: %.2f \n", cidade1, area1);
    printf("Carta 2 -> %s: Área: %.2f \n\n", cidade2, area2);

        if(area1 > area2){
    printf("Carta %d Venceu!", numero_carta1);

}
    else if(area1 > area2){
    printf("Carta %d Venceu!", numero_carta2);
}

    else{
        if(area1 == area2){
    printf("Empate!");
}
       
}

    break;


//PIB

case 3:
    printf("Carta 1 -> %s: PIB: %.2f \n", cidade1, pib1);
    printf("Carta 2 -> %s: PIB: %.2f \n\n", cidade2, pib2);

        if(pib1 > pib2){
    printf("Carta %d Venceu!", numero_carta1);

}
    else if(pib1 < pib2){
    printf("Carta %d Venceu!", numero_carta2);
}

    else{
        if(pib1 == pib2){
    printf("Empate!");
}
       
}

    break;


//Pontos turisticos

case 4:
    printf("Carta 1 -> %s: Pontos turisticos: %d \n", cidade1, pontos_turisticos1);
    printf("Carta 2 -> %s: Pontos turisticos: %d \n\n", cidade2, pontos_turisticos2);

        if(pontos_turisticos1 > pontos_turisticos2){
    printf("Carta %d Venceu!", numero_carta1);

}
    else if(pontos_turisticos1 > pontos_turisticos2){
    printf("Carta %d Venceu!", numero_carta2);
}

    else{
        if(pontos_turisticos1 == pontos_turisticos2){
    printf("Empate!");
}
       
}

    break;


//Densidade demográfica

case 5:
    printf("Carta 1 -> %s: Densidade populacional: %.2f \n", cidade1, dens_pop1);
    printf("Carta 2 -> %s: Densidade populacional: %.2f \n\n", cidade2, dens_pop2);

        if(dens_pop1 < dens_pop2){
    printf("Carta %d Venceu!", numero_carta1);

}
    else if(dens_pop1 < dens_pop2){
    printf("Carta %d Venceu!", numero_carta2);
}

    else{
        if(dens_pop1 == dens_pop2){
    printf("Empate!");
}
       
}

    break;


default:

    printf("Opção inválida, escolha uma das opcções acima.");
}

return 0;
} 
