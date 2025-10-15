#include <stdio.h>

int main(){

int populaçao, pontos; /// nessa seção eu defini as váriaveis e atribui nomes
float area, pib;
char estado[50], codigo[50], nome[50] ; 

  printf("Insira as informações da carta 1 : \n");   ///utilizei o printf para fazer uma introdução ao jogo

  printf("O nome do estado : \n"); ///a partir daqui eu permito ao usuário que ele leia e insira as informações correspondentes das cartas
  scanf("%s", &estado);
    
  printf("O Código : \n");
  scanf("%s", &codigo);
    
  printf("O nome da cidade : \n");
  scanf("%s", &nome);

  printf("População : \n");
  scanf("%d", &populaçao);

  printf("Área : \n");
  scanf("%f", &area);

  printf("PIB : \n");
  scanf("%f", &pib);

  printf("Números de pontos turísticos : \n");
  scanf("%d", &pontos);




  printf("\n\n\nInformações carta 1 \n" ); /// Nessa parte as informações da carta são expostas
    
  printf("Estado : %s \n", estado);
    
  printf("Codigo : %s \n", codigo);
    
  printf("Cidade : %s \n", nome);
    
  printf("População : %d \n", populaçao);
    
  printf("Área : %.2f \n",area);
    
  printf("PIB : %.2f \n", pib);
    
  printf("Pontos turísticos : %d \n", pontos);









  printf("\n\n\nInsira as informações da carta 2 : \n");  ///A partir daqui será inserida as informações da carta 2

  printf("O nome do estado : \n");
  scanf("%s", &estado);
    
  printf("O Código : \n");
  scanf("%s", &codigo);
    
  printf("O nome da cidade : \n");
  scanf("%s", &nome);

  printf("População : \n");
  scanf("%d", &populaçao);

  printf("Área : \n");
  scanf("%f", &area);

  printf("PIB : \n");
  scanf("%f", &pib);

  printf("Números de pontos turísticos : \n");
  scanf("%d", &pontos);

  printf("\n\n\nInformações carta 2 \n" );
    
  printf("Estado : %s \n", estado);
    
  printf("Codigo : %s \n", codigo);
    
  printf("Cidade : %s \n", nome);
    
  printf("População : %d \n", populaçao);
    
  printf("Área : %.2f \n",area);
    
  printf("PIB :%.2f \n", pib);
    
  printf("Pontos turísticos : %d \n\n\n", pontos);

}