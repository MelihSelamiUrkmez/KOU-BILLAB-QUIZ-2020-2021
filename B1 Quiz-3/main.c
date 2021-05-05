#include <stdio.h>
#include <stdlib.h>
//Veri tipi degistirme yontemine yonelik bir quiz
//MELIH SELAMI URKMEZ
int main()
{
float kullanicidegeri;
int toplam=0;
while((int)kullanicidegeri%2==0){//kullanici degeri cift oldugu surece dongumuzun donmesini istiyoruz.
    printf("Bir sayi giriniz:");
    scanf("%f",&kullanicidegeri);
    if(kullanicidegeri-(int)kullanicidegeri!=0){//eger girilen deger ile degerin integera cevrilmis haliyle arasinda fark var ise bu bize kullanicinin float bir deger girdigini gosterir.
        printf("Lutfen sadece tamsayi kullaniniz!!\n");
        continue;//Yukaridaki gibi uyari metni verip donguyu direk basa donduruyoruz.
    }
    if((int)kullanicidegeri%2==0){//eger kullanici cift sayi girer ise topluyoruz.
        toplam+=kullanicidegeri;
    }
    else{//tek sayi girerse donguyu sonlandirip toplam degiskeninin degerini altta yazdiriyoruz.
        break;
    }
}
printf("Dongu sona erdi!!\nToplam=%d",toplam);
    return 0;
}
