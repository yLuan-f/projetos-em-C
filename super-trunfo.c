#include <stdio.h>

int main() {
 
  // CARTA 01 
  char Estado01;
  char CodigoC01[5];
  char NomeDCidade01[20];
  int Populacao01;
  float Area01;
  float PIB01;
  int PontosTuristicos01;
  float DensidadePopulacional01;
  float PIBperCapita01;
  float SuperPoder01;
  // CARTA 02
  char Estado02;
  char CodigoC02[5];
  char NomeDCidade02[20];
  int Populacao02;
  float Area02;
  float PIB02;
  int PontosTuristicos02;
  float DensidadePopulacional02;
  float PIBperCapita02;
  float SuperPoder02;

  // CARTA 01 ENTRADAS

  printf("Carta Numero 1\n");

  printf("Estado (Letra A-H)\n");
  scanf(" %c", &Estado01);

  printf("Codigo (Estado + numeração 01-04)\n");
  scanf("%s", CodigoC01);

  printf("Nome da cidade\n");
  scanf("%s", NomeDCidade01);

  printf("População da cidade\n");
  scanf("%d", &Populacao01);
  setbuf(stdin, NULL);

  printf("Área da cidade (Em km²)\n");
  scanf(" %f", &Area01);

  printf("PIB\n");
  scanf("%f", &PIB01);

  printf("Número de pontos turísticos\n");
  scanf("%d", &PontosTuristicos01);

  // CALCULOS 01

  DensidadePopulacional01 = Populacao01 / Area01;
  PIBperCapita01 = (PIB01 * 1000000000) / Populacao01;
  SuperPoder01 = Populacao01 + Area01 + PIB01 + DensidadePopulacional01;

  // CARTA 02 ENTRADAS

  printf("Carta Numero 2\n");

  printf("Estado (Letra A-H)\n");
  scanf(" %c", &Estado02);

  printf("Codigo (Estado + numeração 01-04)\n");
  scanf("%s", CodigoC02);

  printf("Nome da cidade\n");
  scanf("%s", NomeDCidade02);

  printf("População da cidade\n");
  scanf("%d", &Populacao02);
  setbuf(stdin, NULL);
  printf("Área da cidade (Em km²)\n");
  scanf(" %f", &Area02);

  printf("PIB\n");
  scanf("%f", &PIB02);

  printf("Número de pontos turísticos\n");
  scanf("%d", &PontosTuristicos02);

 // CALCULOS 02

  DensidadePopulacional01 = Populacao02 / Area02;
  PIBperCapita02 = (PIB02 * 1000000000) / Populacao02;
  SuperPoder02 = Populacao02 + Area02 + PIB02 + DensidadePopulacional02;

  // CARTA 01 SAÍDAS

  printf("~~~~~~Carta 01~~~~~~\n");
  printf("Estado: %c\n", Estado01);
  printf("Código: %s\n", CodigoC01);
  printf("Nome da Cidade:%s\n", NomeDCidade01);
  printf("População: %d\n", Populacao01);
  printf("Área: %.2f\n", Area01);
  printf("PIB: %.2f\n", PIB01);
  printf("Número de Pontos Turísticos: %d\n", PontosTuristicos01);
  printf("Densidade Populacional: %.2f hab/km²\n", DensidadePopulacional01);
  printf("PIB per Capita: %.2f Reais\n", PIBperCapita01);
  printf("Poder de Carta %f\n", SuperPoder01);

  //CARTA 02 SAÍDAS

  printf("~~~~~~Carta 02~~~~~~\n");
  printf("Estado: %c\n", Estado02);
  printf("Código: %s\n", CodigoC02);
  printf("Nome da Cidade:%s\n", NomeDCidade02);
  printf("População: %d\n", Populacao02);
  printf("Área: %.2f km²\n", Area02);
  printf("PIB: %.2f Bilhões de Reais\n", PIB02);
  printf("Número de Pontos Turísticos: %d\n", PontosTuristicos02);
  printf("Densidade Populacional: %.2f hab/km²\n", DensidadePopulacional02);
  printf("PIB per Capita: %.2f Reais\n", PIBperCapita02);
  printf("Poder de Carta %f\n", SuperPoder02);


  //RESULTADO
  printf("***Comparação das Cartas***\n");

  printf("População: Carta %d vence\n", Populacao01 > Populacao02);
  printf("Área: Carta %d vence\n", Area01 > Area02);
  printf("PIB: Carta %d vence\n", PIB01 > PIB02);
  printf("Pontos Turísticos: Carta %d vence\n", PontosTuristicos01 > PontosTuristicos02);
  printf("Densidade Populacioal: Carta %d vence\n", DensidadePopulacional01 < DensidadePopulacional02);
  printf("PIBperCapita: Carta %d vence\n", PIBperCapita01 > PIBperCapita02);
  printf("Poder de Carta: Carta %d vence\n", SuperPoder01 > SuperPoder02);

  return 0;

}
