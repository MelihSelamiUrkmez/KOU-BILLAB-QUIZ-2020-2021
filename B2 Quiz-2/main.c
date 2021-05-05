#include <stdio.h>
#include <stdlib.h>
//MELIH SELAMI URKMEZ
int pw(int s,int r){//us alma fonksiyonu(hazir fonksiyon kullanmak yasak)
int carpim=1;
for(int i=0;i<r;i++){
    carpim*=s;
}
return carpim;
}
void armstrong(int *ptr){
int gecici=*ptr,gecici1=*ptr;//gecici basamaklari teker teker ayirmak icin,gecici1 de basamak sayisini bulmak icin tanimlanmistir.
int toplam=0,basamaksayisi=0;
while(gecici1!=0){//basamak sayisi bulma dongu
    basamaksayisi+=1;
    gecici1=gecici1/10;
}
while(gecici!=0){//sayinin basamaklarinin basamak sayisi kadar ussunu alan dongu
toplam+=pw(gecici%10,basamaksayisi);
gecici=gecici/10;
}
if(toplam==*ptr)//eger sayinin basamaklarinin basamak sayisi kadar uslerinin toplami sayiya esitse armstrong sayisidir.
    printf("%d sayisi armstrong sayisidir.",*ptr);
else{
    printf("%d sayisi armstrong sayisi degildir.",*ptr);
}
}
int main()
{
int kullanicidegeri;
printf("Bir sayi giriniz:");
scanf("%d",&kullanicidegeri);
int *ptr=&kullanicidegeri;//kullanicidan aldigimiz degeri bir pointera tanimlayip fonksiyona gonderiyoruz.
armstrong(ptr);
    return 0;
}
