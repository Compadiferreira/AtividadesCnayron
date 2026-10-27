#include<stdio.h>  
#include<stdlib.h>// biblioteca que tem comandos por exemplo pause
void main (){
 
    int n1,n2,n3,n4,n5,Mult;

 printf("Escreva o numero1 : ");
 scanf("%i",&n1);
printf("Escreva o numero2 : ");
 scanf(" %i",&n2);
 printf("Escreva o numero3 : ");
 scanf(" %i",&n3);
 printf("Escreva o numero4 : ");
 scanf(" %i",&n4);
 printf("Escreva o numero5 : ");
 scanf(" %i",&n5);

Mult = n1*n2*n3*n4*n5;

printf("O primeiro numero que voce digitou:  %i \n", n1);
printf("O segundo numero que voce digitou : %i \n", n2);
printf("O terceiro numero que voce digitou : %i \n", n3);
printf("O quarto numero que voce digitou :%i \n", n4);
printf("O quinto numero que voce digitou : %i \n", n5);

printf("E a multiplicação dos numeros é :%i",Mult);


}