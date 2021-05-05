#include <stdio.h>
#include <stdlib.h>
#define pi 3.14//pi degiskenine 3.14u kalici bir sekilde atiyoruz.
//MELIH SELAMI URKMEZ
int main()
{
   int yaricap=7,kenar=23;//soruda istendigi gibi degiskenlere degerleri tanimliyoruz.

   float kureninyuzeyalani=4.0*pi*yaricap*yaricap;//veri tipimiz float olmasi icin carpim durumundaki sayilardan en az birinin float olmasi gerektiginden 4u 4.0 seklinde yaziyoruz.
   int kupunyuzeyalani=6*kenar*kenar;
   printf("Kupun yuzey alani:%d\nKurenin yuzey alani:%f\n",kupunyuzeyalani,kureninyuzeyalani);
    return 0;
}
