#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

typedef struct { 

   
    char estado;         // Letra de 'A' a 'H'
    char codigo[4];      // ex: "A01", "B03"
    char cidade[50];     // Nome da cidade
    int populacao;       // população
    float area;         // área em km  
    float pib;           // Pib
    int pontos;          // Número de pontos turisticos

} CartasSuperTrunfo;

int main() { 
     
    
    
    CartasSuperTrunfo c1, c2;
     

     printf("==== Cadastro da Cidade 1 ====\n");
    
     
     printf("Informe a letra do Estado (A-H): ");
     scanf(" %c", &c1.estado);  // espaço antes de %c ignora o enter anterior

     printf("Informe o código da cidade (ex: A01): ");
     scanf("%s", c1.codigo);

     printf("Informe o nome da cidade: ");
     scanf(" %[^\n]", c1.cidade);  // lê até o enter

     printf("Informe a população: ");
     scanf("%d", &c1.populacao);

     printf("Informe a área (em km²): ");
     scanf("%f%*c", &c1.area); // %*c para ignorar o enter anterior 

     printf("Informe o PIB (em bilhões): ");
     scanf("%f%*c", &c1.pib); //%*c para ignorar o enter anterior

     printf("Informe o número de pontos turísticos: ");
     scanf("%d", &c1.pontos);


     printf("\n==== Cadastro da Cidade 2 ====\n");
     
     printf("Informe a letra do Estado (A-H): ");
     scanf(" %c", &c2.estado);
     

     printf("Informe o código da cidade (ex: B02): ");
     scanf("%s", c2.codigo);

     printf("Informe o nome da cidade: ");
     scanf(" %[^\n]", c2.cidade);

     printf("Informe a população: ");
     scanf("%d", &c2.populacao);
 
     printf("Informe a área (em km²): ");
     scanf("%f%*c", &c2.area); 
     
     
     printf("Informe o PIB (em bilhões): ");
     scanf("%f%*c", &c2.pib);
     

     printf("Informe o número de pontos turísticos: ");
     scanf("%d", &c2.pontos);


     // Exibindo os dados cadastrados
     printf("\n===== CIDADE 1 =====\n");
     printf("Estado: %c\n", c1.estado);
     printf("Código: %s\n", c1.codigo);
     printf("Cidade: %s\n", c1.cidade);
     printf("População: %d\n", c1.populacao);
     printf("área: %.2f km²\n", c1.area);
     printf("PIB: R$ %.2f bilhões\n", c1.pib);
     printf("Número de Pontos Turísticos: %d\n", c1.pontos);

     printf("\n===== CIDADE 2 =====\n");
     printf("Estado: %c\n", c2.estado);
     printf("Código: %s\n", c2.codigo);
     printf("Cidade: %s\n", c2.cidade);
     printf("População: %d\n", c2.populacao);
     printf("área: %.2f km²\n", c2.area);
     printf("PIB: R$ %.2f bilhões\n", c2.pib);
     printf("Número de Pontos Turísticos: %d\n", c2.pontos);

    return 0;
}


    

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
       
    // Cadastro das Cartas: \n
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.


