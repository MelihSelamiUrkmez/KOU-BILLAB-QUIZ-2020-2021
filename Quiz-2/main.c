#include <stdio.h>
#include <stdlib.h>
//MELIH SELAMI URKMEZ
int main()
{
 printf(" ax2 + bx +c = 0 seklinde verilmis olan 2.dereceden denklem icin a,b ve c degerlerini giriniz!\n");
 int a,b,c;
 printf("a degerini giriniz:");
 scanf("%d",&a);
 printf("b degerini giriniz:");
 scanf("%d",&b);
 printf("c degerini giriniz:");
 scanf("%d",&c);
 int diskrimant=(b*b)-(4*a*c);
 if(diskrimant>0){
    printf("Denklemin iki reel koku vardir!\n");
 }
 else if(diskrimant==0){
    printf("Denklemin tek reel koku vardir!\n");
 }
 else{
    printf("Denklemin reel koku yoktur!\n");
 }

    return 0;
}
