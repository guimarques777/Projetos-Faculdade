#include <stdio.h>

int main() {
//variáveis para armazenar os dados da primeira carta.
char estado1[3];
char codigo1[5];
char cidade1[20];
unsigned long int populacao1;
float area1;
double pib1;
int pontosTuristicos1;
float densidade1;
float ppc1;
float superpoder1;

//variáveis para armazenar os dados da segunda carta.
char estado2[3];
char codigo2[5];
char cidade2[20];
unsigned long int populacao2;
float area2;
double pib2;
int pontosTuristicos2;
float densidade2;
float ppc2;
float superpoder2;
int atributo1, atributo2;
float soma_carta1 = 0;
float soma_carta2 = 0;


printf("Você ira usar 2 cartas nessa rodada.\n");

//entrada de dados da primeira carta.

printf("Vamos começar com a primeira carta\n");

printf("Escolha uma letra de A a H para representar o estado de sua primeira carta :\n");
scanf("%s", estado1);

printf("Agora junto com a letra de seu estado, escolha um numero de 01 a 04 e forme o codigo de seu estado (exemplo: A02) :\n");
scanf("%s", codigo1);

printf("Qual o nome da cidade da sua primeira carta\n");
scanf("%s", cidade1);

printf("Qual o tamanho da população da sua primeira carta?\n");
scanf("%lu", &populacao1);

printf("Qual a área da sua primeira carta?\n");
scanf("%f", &area1);

printf("Qual o PIB da sua primeira carta?\n");
scanf("%lf", &pib1);

printf("Quantos pontos turísticos tem em sua primeira carta?\n");
scanf("%d", &pontosTuristicos1);

//entrada de dados da segunda carta.

printf("Certo, agora você ira digitar os dados da segunda carta\n");

printf("Escolha outra letra de A a H para representar o estado de sua segunda carta :\n");
scanf("%s", estado2);

printf("Agora junto com a letra de seu estado, escolha um numero de 01 a 04 e forme o codigo de seu estado (exemplo: A02) :\n");
scanf("%s", codigo2);

printf("Qual o nome da cidade da sua segunda carta\n");
scanf("%s", cidade2);

printf("Qual o tamanho da população da sua segunda carta?\n");
scanf("%lu", &populacao2);

printf("Qual a área da sua segunda carta?\n");
scanf("%f", &area2);

printf("Qual o PIB da sua segunda carta?\n");
scanf("%lf", &pib2);

printf("Quantos pontos turísticos tem em sua segunda carta?\n");
scanf("%d", &pontosTuristicos2);
//calculo da densidade demográfica e PIB per capita.

densidade1 = populacao1 / area1;
ppc1 = pib1 / populacao1;
superpoder1 = (float)populacao1 + (float)area1 + (float)pib1 + (float)pontosTuristicos1 + (float)ppc1 + (1 / densidade1);

densidade2 = populacao2 / area2;
ppc2 = pib2 / populacao2;
superpoder2 = (float)populacao2 + (float)area2 + (float)pib2 + (float)pontosTuristicos2 + (float)ppc2 + (1 / densidade2);
//exibição dos dados das cartas.

printf("====Carta 1:====\n");
printf("Estado: %s\n", estado1);
printf("Código da carta: %s\n", codigo1);
printf("Nome da Cidade: %s\n", cidade1);
printf("Tamanho da população: %lu\n", populacao1);
printf("Área: %.2f Km²\n", area1);
printf("PIB:R$ %.2lf\n", pib1);
printf("Pontos Turísticos: %d\n", pontosTuristicos1);
printf("Densidade Populacional: %.2f hab/Km²\n", densidade1);
printf("PIB per capita: R$ %.2f\n", ppc1);
printf("Superpoder: %.2f\n", superpoder1);

printf("====Carta 2:=====\n");
printf("Estado: %s\n", estado2);
printf("Código da carta: %s\n", codigo2);
printf("Nome da Cidade: %s\n", cidade2);
printf("Tamanho da população: %lu\n", populacao2);
printf("Área: %.2f Km²\n", area2);
printf("PIB:R$ %.2lf\n", pib2);
printf("Pontos Turísticos: %d\n", pontosTuristicos2);
printf("Densidade Populacional: %.2f hab/Km²\n", densidade2);
printf("PIB per capita: R$ %.2f\n", ppc2);
printf("Superpoder: %.2f\n", superpoder2);

//comparação de atributos das cartas.

printf("Escolha 2 atributos para comparar na batalha entre as cartas:\n");
printf("1. população\n");
printf("2. área\n");
printf("3. pib\n");
printf("4. pontos turísticos\n");
printf("5. densidade populacional\n");

printf("Digite o número do atributo que deseja comparar (1 a 5):\n ");
scanf(" %d", &atributo1);
printf("Agora, escolha outro atributo para comparar:\n");
printf("Atenção: não é possível escolher o mesmo atributo duas vezes.\n");
printf("Digite o número do segundo atributo que deseja comparar (1 a 5):\n ");
scanf(" %d", &atributo2);

if (atributo1 == atributo2) {
    printf("Você não pode escolher o mesmo atributo duas vezes. Tente novamente.\n");
    return 1; // Encerra o programa se os atributos forem iguais
}



switch (atributo1) {
     case 1:
    soma_carta1 += (float)populacao1;
        soma_carta2 += (float)populacao2;
    printf("primeiro atributo escolhido:\n");
    printf("====Batalha Individual====\n");
    printf("Estado %s X Estado %s\n", estado1, estado2);
    printf("atributo usado para comparação: População\n");
    printf("População da carta 1: %lu\n", populacao1);
    printf("População da carta 2: %lu\n", populacao2);
    if(populacao1 > populacao2) {
        printf("A carta 1 venceu na batalha individual.\n");
    } else if(populacao1 < populacao2) {
        printf("A carta 2 venceu na batalha individual.\n");
    }else {
        printf("As cartas empataram na batalha individual.\n");
    }


break;
    
     case 2: 
        soma_carta1 += area1;
        soma_carta2 += area2;
    printf("primeiro atributo escolhido:\n");
    printf("====Batalha Individual====\n");
    printf("Estado %s X Estado %s\n", estado1, estado2);
    printf("atributo usado para comparação: Área\n");
    printf("Área da carta 1: %.2f Km²\n", area1);
    printf("Área da carta 2: %.2f Km²\n", area2);
    if(area1 > area2) {
        printf("A carta 1 venceu na batalha individual.\n");
    } else if(area1 < area2) {
        printf("A carta 2 venceu na batalha individual.\n");
    } else {
        printf("As cartas empataram na batalha individual.\n");
    }
     
        break;
    case 3:
        soma_carta1 += pib1;
        soma_carta2 += pib2;
    printf("primeiro atributo escolhido:\n");
    printf("====Batalha Individual====\n");
    printf("Estado %s X Estado %s\n", estado1, estado2);
    printf("atributo usado para comparação: PIB\n");
    printf("PIB da carta 1: R$ %.2lf\n", pib1);
    printf("PIB da carta 2: R$ %.2lf\n", pib2);
    if(pib1 > pib2) {
        printf("A carta 1 venceu na batalha individual.\n");
    } else if(pib1 < pib2) {
        printf("A carta 2 venceu na batalha individual.\n");
    } else {
        printf("As cartas empataram na batalha individual.\n");
    }
        break;
    case 4:
        soma_carta1 += (float)pontosTuristicos1;
        soma_carta2 += (float)pontosTuristicos2;
    printf("primeiro atributo escolhido:\n");
    printf("====Batalha Individual====\n");
    printf("Estado %s X Estado %s\n", estado1, estado2);
    printf("atributo usado para comparação: Pontos Turísticos\n");
    printf("Pontos Turísticos da carta 1: %d\n", pontosTuristicos1);
    printf("Pontos Turísticos da carta 2: %d\n", pontosTuristicos2);
    if(pontosTuristicos1 > pontosTuristicos2) {
        printf("A carta 1 venceu na batalha individual.\n");
    } else if(pontosTuristicos1 < pontosTuristicos2) {
        printf("A carta 2 venceu na batalha individual.\n");
    } else {
        printf("As cartas empataram na batalha individual.\n");
    }
        break;
    case 5:
    
        soma_carta1 += (1.0f / densidade1);  // quanto menor a densidade, maior o valor somado
        soma_carta2 += (1.0f / densidade2);
    printf("primeiro atributo escolhido:\n");
    printf("====Batalha Individual====\n");
    printf("Estado %s X Estado %s\n", estado1, estado2);
    printf("atributo usado para comparação: Densidade Populacional\n");
    printf("Densidade Populacional da carta 1: %.2f hab/Km²\n", densidade1);
    printf("Densidade Populacional da carta 2: %.2f hab/Km²\n", densidade2);

    if(densidade1 < densidade2) { // quanto menor a densidade, maior o valor somado
        printf("A carta 1 venceu na batalha individual.\n");
    } else if(densidade1 > densidade2) {
        printf("A carta 2 venceu na batalha individual.\n");
    } else {
        printf("As cartas empataram na batalha individual.\n");
    }
        break;
    default:
        printf("Atributo inválido! Por favor, escolha um número entre 1 e 5.\n");
        return 1; // Encerra o programa se o atributo for inválido
    }
// Soma do segundo atributo
switch (atributo2) {
    case 1:
        soma_carta1 += (float)populacao1;
        soma_carta2 += (float)populacao2;
        printf("Segundo atributo escolhido:\n");
        printf("====Batalha Individual====\n");
        printf("Estado %s X Estado %s\n", estado1, estado2);
        printf("atributo usado para comparação: População\n");
        printf("População da carta 1: %lu\n", populacao1);
        printf("População da carta 2: %lu\n", populacao2);
        if(populacao1 > populacao2) {
            printf("A carta 1 venceu na batalha individual.\n");
        } else if(populacao1 < populacao2) {
            printf("A carta 2 venceu na batalha individual.\n");
        } else {
            printf("As cartas empataram na batalha individual.\n");
        }
        break;
    case 2:
        soma_carta1 += area1;
        soma_carta2 += area2;
        printf("Segundo atributo escolhido:\n");
        printf("====Batalha Individual====\n");
        printf("Estado %s X Estado %s\n", estado1, estado2);
        printf("atributo usado para comparação: Área\n");
        printf("Área da carta 1: %.2f Km²\n", area1);
        printf("Área da carta 2: %.2f Km²\n", area2);
        if(area1 > area2) {
            printf("A carta 1 venceu na batalha individual.\n");
        } else if(area1 < area2) {
            printf("A carta 2 venceu na batalha individual.\n");
        } else {
            printf("As cartas empataram na batalha individual.\n");
        }
        break;
    case 3:
        soma_carta1 += pib1;
        soma_carta2 += pib2;
        printf("Segundo atributo escolhido:\n");
        printf("====Batalha Individual====\n");
        printf("Estado %s X Estado %s\n", estado1, estado2);
        printf("atributo usado para comparação: PIB\n");
        printf("PIB da carta 1: R$ %.2lf\n", pib1);
        printf("PIB da carta 2: R$ %.2lf\n", pib2);
        if(pib1 > pib2) {
            printf("A carta 1 venceu na batalha individual.\n");
        } else if(pib1 < pib2) {
            printf("A carta 2 venceu na batalha individual.\n");
        } else {
            printf("As cartas empataram na batalha individual.\n");
        }
        break;
    case 4:
        soma_carta1 += (float)pontosTuristicos1;
        soma_carta2 += (float)pontosTuristicos2;
        printf("Segundo atributo escolhido:\n");
        printf("====Batalha Individual====\n");
        printf("Estado %s X Estado %s\n", estado1, estado2);
        printf("atributo usado para comparação: Pontos Turísticos\n");
        printf("Pontos Turísticos da carta 1: %d\n", pontosTuristicos1);
        printf("Pontos Turísticos da carta 2: %d\n", pontosTuristicos2);
        if(pontosTuristicos1 > pontosTuristicos2) {
            printf("A carta 1 venceu na batalha individual.\n");
        } else if(pontosTuristicos1 < pontosTuristicos2) {
            printf("A carta 2 venceu na batalha individual.\n");
        } else {
            printf("As cartas empataram na batalha individual.\n");
        }
        break;
    case 5:
        soma_carta1 += (1.0f / densidade1);
        soma_carta2 += (1.0f / densidade2);
        printf("Segundo atributo escolhido:\n");
        printf("====Batalha Individual====\n");
        printf("Estado %s X Estado %s\n", estado1, estado2);
        printf("atributo usado para comparação: Densidade Populacional\n");
        printf("Densidade Populacional da carta 1: %.2f hab/Km²\n", densidade1);
        printf("Densidade Populacional da carta 2: %.2f hab/Km²\n", densidade2);
        if(densidade1 < densidade2) {
            printf("A carta 1 venceu na batalha individual.\n");
        } else if(densidade1 > densidade2) {
            printf("A carta 2 venceu na batalha individual.\n");
        } else {
            printf("As cartas empataram na batalha individual.\n");
        }
        break;
    default:
        printf("Atributo inválido! Por favor, escolha um número entre 1 e 5.\n");
        return 1; // Encerra o programa se o atributo for inválido
}
printf("====Resultado Final:====\n");
printf("Soma dos atributos da carta 1: %.2f\n", soma_carta1);
printf("Soma dos atributos da carta 2: %.2f\n", soma_carta2);
printf("%s\n", 
    (soma_carta1 > soma_carta2) ? "A carta 1 venceu a batalha final!" :
    (soma_carta1 < soma_carta2) ? "A carta 2 venceu a batalha final!" :
    "As cartas empataram na batalha final!");



return 0;


}
