#include<stdio.h>  
#include<stdlib.h>// biblioteca que tem comandos por exemplo pause
void main (){
 
  int x,y,result;

  printf("Digite o valor de x : ");
  scanf("%i",&x);
  printf("Digite o valor de y : ");
  scanf("%i", &y);

  result = (x + y)*(x - y) + x*y;

  printf("%i", result);
 
}
