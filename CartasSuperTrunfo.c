#include <stdio.h>
#include <string.h>

int main() {

    char Estado; 
    char codigoDaCidade[10];
    char NomeDaCidade[100];
    char String1[132] = "Agora vamos cadastrar as cidades! Seguindo o exemplo: A01 (A letra representa o Estado e o numero a identificacao de qual cidade.";
    int Populacao;
    float Area;
    float Pib;
    int NroPontosTuristicos;

    printf("Estado:\n");
    scanf(" %c", &Estado);

    printf("%s \n", String1);

    printf("Digite o codigo da cidade:\n");
    scanf("%s", codigoDaCidade); 

    printf("Digite o nome da cidade:\n");
    scanf(" %s", &NomeDaCidade); 

    printf("Numero de habitantes (Populacao):\n");
    scanf("%d", &Populacao);

    printf("Area da cidade em km²:\n");
    scanf("%f", &Area);

    printf("Digite o PIB:\n");
    scanf("%f", &Pib);

    printf("Numero de pontos turisticos:\n");
    scanf("%d", &NroPontosTuristicos);

    printf("Estado: %c\n Codigo da cidade: %s\n", Estado, codigoDaCidade);
    printf("Cidade: %s\n Habitantes: %d\n", NomeDaCidade, Populacao);
    printf("PIB: %f\n Pontos turisticos: %d\n", Pib, NroPontosTuristicos);

    return 0;
}
