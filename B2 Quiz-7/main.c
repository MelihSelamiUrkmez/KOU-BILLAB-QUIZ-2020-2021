#include <stdio.h>
#include <stdlib.h>
/*Ad:Melih Selami
Soyad:Urkmez
Numara:200202010*/
struct DTarih{
int gun;
int ay;
int yil;
};
struct sahis_bilgileri{
char ad[50];
struct DTarih dogumtarihi;
};
int main()
{
int boyut;
printf("Kisi sayisini giriniz:");
scanf("%d",&boyut);
fflush(stdin);
struct sahis_bilgileri liste[boyut];
printf("Bilgileri giriniz:\n");
for(int i=0;i<boyut;i++){
    printf("Adi:");
    scanf("%s",&liste[i].ad);
    fflush(stdin);
    printf("Dogdugu gun:");
    scanf("%d",&liste[i].dogumtarihi.gun);
    fflush(stdin);
    printf("Dogdugu ay:");
    scanf("%d",&liste[i].dogumtarihi.ay);
    fflush(stdin);
    printf("Dogdugu yil:");
    scanf("%d",&liste[i].dogumtarihi.yil);
    fflush(stdin);
}
int indis=0;
printf("\n\n\nKayitlar yazdiriliyor......\n\n");
for(int i=0;i<boyut;i++){
    printf("Ad:%s\nDogum tarihi:%d.%d.%d\n\n",liste[i].ad,liste[i].dogumtarihi.gun,liste[i].dogumtarihi.ay,liste[i].dogumtarihi.yil);
}
printf("\n\n");
struct sahis_bilgileri buyuk=liste[0];
for(int i=1;i<boyut;i++){

    if(liste[i].dogumtarihi.yil<buyuk.dogumtarihi.yil){
        buyuk=liste[i];
    }
    else if(liste[i].dogumtarihi.yil==buyuk.dogumtarihi.yil){

        if(liste[i].dogumtarihi.ay<buyuk.dogumtarihi.ay){
            buyuk=liste[i];
        }
        else if(liste[i].dogumtarihi.ay==buyuk.dogumtarihi.ay){

            if(liste[i].dogumtarihi.gun<buyuk.dogumtarihi.gun){
                buyuk=liste[i];
            }}}}
printf("Yasi en buyuk olan kisi:%s %d.%d.%d",buyuk.ad,buyuk.dogumtarihi.gun,buyuk.dogumtarihi.ay,buyuk.dogumtarihi.yil);


    return 0;
}
