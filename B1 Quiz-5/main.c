#include <stdio.h>
#include <stdlib.h>
//MELIH SELAMI URKMEZ
void xParseSeconds(int seconds){
int saat=0,dakika=0,saniye=0;
dakika=seconds/60;//dakika integer oldugu icin bolumun sadece tam kismini alacaktir.
saniye=seconds-(dakika*60);//saniyenin dakikaya cevrildikten sonra kalanini buluyoruz.
if(dakika>=60){
    saat=dakika/60;// saat de integer oldugu icin bolumun tam kismini alacaktir.
    dakika=dakika-(saat*60);//dakikanin saate cevrildikten sonra kalanini buluyoruz.
}
printf("%d saat %d dakika %d saniye",saat,dakika,saniye);

}
int main()
{
int kullanicidegeri;
printf("Saniye bilgisi giriniz:");
scanf("%d",&kullanicidegeri);
xParseSeconds(kullanicidegeri);
    return 0;
}
