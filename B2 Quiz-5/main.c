#include <stdio.h>
#include <stdlib.h>
//MELIH SELAMI URKMEZ
void print_array(const char arr[5][100]){//yazdirma fonksiyonumuz

for(int i=0;i<5;i++){
    printf("'%s' uzunluk %d\n",arr[i],strlen(arr[i]));
}


}
int main()
{
char string[5][100]={"Bilgisayar Muhendisligi Bilgisayar Laboratuvari","Birinci Sinif","String cumlelerin uzunluk toplamini bulun.","sureniz yetmis bes dakika","soruyu dikkatli okuyun!"};
print_array(string);//ilk basta duz cumleleri uzunluklari ile beraber yazdiriyoruz.
printf("Ters Cumleler:\n");
for(int i=0;i<5;i++){//bastaki karakterleri sondaki karakterler ile degistiriyoruz.
    int uzunluk=strlen(string[i]);
    for(int j=0;j<uzunluk/2;j++){
        char gecici=string[i][j];
        string[i][j]=string[i][uzunluk-1-j];
        string[i][uzunluk-1-j]=gecici;
    }
}
print_array(string);//ters cevrilmis diziyi yazdiriyoruz.
    return 0;


}
