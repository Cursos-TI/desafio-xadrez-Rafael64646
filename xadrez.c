#include <stdio.h>

int main(){
int torre,bispo,rainha,cavalo;
//valor
bispo=1;
rainha=1;
cavalo=1;
//torre andando
for (torre = 1; torre <= 5; torre++)
{
   printf("movendo a torre para direita\n");
}
//bispo andando
while (bispo <= 5 )
{
printf("movendo o bispo para cima e para a direita\n");
    bispo++;
}
//rainha andando
do
{
  printf("movendo a rainha para esquerda\n");
  rainha++;
} while (rainha <=8);

//cavalo andando
for ( cavalo ;cavalo > 0 ;cavalo-- )
{
  for (int i = 0; i < 2; i++)
  {
    printf("movendo o cavalo para baixo\n");
  }
  printf("movendo o cavalo para esquerda\n");
}





    return 0;
}