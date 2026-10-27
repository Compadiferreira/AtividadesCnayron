#include<stdio.h>  
#include<stdlib.h>// biblioteca que tem comandos por exemplo pause
void main (){
   int a,b,c,media;
printf("Escreva o valor o primeiro numero: ");
scanf("%i",&a);
printf("Escreva o valor o segundo numero: ");
scanf("%i",&b);
printf("Escreva o valor o terceirp numero: ");
scanf("%i",&c);

media = (a +b+c)/3;
 printf("A media dos valores é: %i \n",media);

 if (media % 2 ==0)
 {
    printf("seu valor e par");
 } else{printf("Seu valor e impar");}
 



}