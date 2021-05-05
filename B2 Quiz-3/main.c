#include <stdio.h>
#include <stdlib.h>
//MELIH SELAMI URKMEZ
int main()
{
char string[100];
printf("Stringi giriniz:");
fgets(string,100,stdin);//kullanicidan girdiyi aliyoruz.
int bosluklu_uzunluk=strlen(string)-1,bosluk_sayisi=0;//bosluklu uzunlugu bulurken 1 cikarmamizin sebebi fgets ile girdi alindiginda stringin sonuna \n konuldugundan dolayidir.
for(int i=0;i<bosluklu_uzunluk;i++){//stringteki bosluk sayisini bulma fonksiyonu
    if(string[i]==' ')
        bosluk_sayisi+=1;
}
int bosluksuz_uzunluk=bosluklu_uzunluk-bosluk_sayisi;
printf("Uzunlugu:%d\n",bosluksuz_uzunluk);
char ing_sesli_harfler[11]={'a','e','i','o','u','A','E','I','O','U'};
int sesli_harf_sayisi=0;
for(int i=0;i<bosluklu_uzunluk;i++){//her harfi teker teker dolasarak harfin sesli harfler dizisinde olup olmadigini kontrol ediyoruz.
    for(int j=0;j<11;j++){
        if(string[i]==ing_sesli_harfler[j]){
            sesli_harf_sayisi+=1;
            break;
        }
    }
}
int sessiz_harf_sayisi=bosluksuz_uzunluk-sesli_harf_sayisi;// sessiz harf sayisini bosluksuz uzunluktan sesli harflerin sayisini cikartarak buluyoruz.
printf("Sesli harf sayisi:%d\nSessiz harf sayisi:%d",sesli_harf_sayisi,sessiz_harf_sayisi);
    return 0;
}
