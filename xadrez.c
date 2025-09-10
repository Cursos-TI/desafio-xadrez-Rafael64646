#include <stdio.h>
void movertorre(int casas){  
  if (casas>0)
  {
    printf("torre:direira\n");
    movertorre (casas -1);
  }
  
}
void moverbispo(int casas){  
  for (int i = 0; i < 1; i++)
  {
    for (int j = 0; j < 1; j++)
    {
      printf("bispo:cima\n");
    }
    printf("bispo:direita\n");
  
  }

}
void moverrainha(int casas){  
  if (casas>0)
  {
    printf("rainha:esquerda\n");
    moverrainha (casas -1);
  }
  
}

int main(){
int cavalo;
//torre andando 
movertorre(5);

//bispo andando
moverbispo(1);

//rainha andando

moverrainha(8);

//escolhendo qual lado quero que o cavalo vai
cavalo=1;
//movendo o cavalo
switch (cavalo)
{
case 1:
  
for ( cavalo ;cavalo > 0 ;cavalo-- )
{
  for (int i = 0; i < 2; i++)
  {
    printf("cavalo:cima\n");
  }
  printf("cavalo:direita\n");
}
  break;
case 2:
  
for ( cavalo ;cavalo > 0 ;cavalo-- )
{
  for (int i = 0; i < 2; i++)
  {
    printf("cavalo:baixo\n");
  }
  printf("cavalo:esquerda\n");
}
  break;
case 3:
  
for ( cavalo ;cavalo > 0 ;cavalo-- )
{
  for (int i = 0; i < 2; i++)
  {
    printf("cavalo:baixo\n");
  }
  printf("cavalo:direita\n");
}
  break;
case 4:
  
for ( cavalo ;cavalo > 0 ;cavalo-- )
{
  for (int i = 0; i < 2; i++)
  {
    printf("cavalo:cima\n");
  }
  printf("cavalo:esquerda\n");
}
  break;

  case 5:
  
for ( cavalo ;cavalo > 0 ;cavalo-- )
{
  for (int i = 0; i < 2; i++)
  {
    printf("cavalo:esquerda\n");
  }
  printf("cavalo:cima\n");
}
  break;

  case 6:
  
for ( cavalo ;cavalo > 0 ;cavalo-- )
{
  for (int i = 0; i < 2; i++)
  {
    printf("cavalo:esquerda\n");
  }
  printf("cavalo:baixo\n");
}
  break;

  case 7:
  
for ( cavalo ;cavalo > 0 ;cavalo-- )
{
  for (int i = 0; i < 2; i++)
  {
    printf("cavalo:direita\n");
  }
  printf("cavalo:cima\n");
}
  break;

  case 8:
  
for ( cavalo ;cavalo > 0 ;cavalo-- )
{
  for (int i = 0; i < 2; i++)
  {
    printf("cavalo:direita\n");
  }
  printf("cavalo:baixo\n");
}
  break;


default:
   0;
  break;
}





    return 0;
}