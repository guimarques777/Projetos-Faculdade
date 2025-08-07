#include <stdio.h>


int main() {

int torre = 1, bispo = 1, rainha;

printf("Movimento da torre\n");
while(torre <= 5)
{
printf("Direita\n");
torre++;    


}

printf("Movimento do bispo\n");

do {

printf("direita\n");
printf("cima\n");
bispo++;




}while (bispo <= 5);

printf("Movimento da rainha\n");

for(rainha = 1; rainha <= 8; rainha++)
{
    printf("Esquerda\n");
}



    return 0;
}