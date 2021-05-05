#include <stdio.h>
#include <stdlib.h>
/*Ad:Melih Selami
Soyad:Ürkmez
Numara:200202010
*/
int adet=0;//kullanicinin toplam kac adet deger girdigini tutuyoruz.
void bilgial(char arr[50][100]){//kullanici END girene kadar kullanicidan girdi aliyoruz.
adet=0;
for(int i=0;i<50;i++){
    printf("Bilgileri girin:");
    gets(arr[i]);
    fflush(stdin);
    if(strcmp(arr[i],"END")==0)
    break;
    adet++;

}
}
void DogruGirisListele(char arr[50][100]){
//basta degiskenlere deger atma sebebim sscanf ile okuma yaparken sikinti olur ise kontrol saglamak amacli.
char marka[100]="";
int yil=-1;
float yakma=-1;
for(int i=0;i<adet;i++){
    sscanf(arr[i],"%s %d %f",marka,&yil,&yakma);
    if(marka!="" && yil!=-1 && yakma!=-1)//eger hicbiri basta atadigim degerlere esit degilse hepsi duzgun bir sekilde okunmus demektir.Bu yuzden yazdirabilirim.
        printf("%20s %-10d %.1f\n",marka,yil,yakma);
marka="";
yil=-1;
yakma=-1;
}


}
int main()
{
char aracbilgileri[50][100];
bilgial(&aracbilgileri);
DogruGirisListele(aracbilgileri);
    return 0;
}
