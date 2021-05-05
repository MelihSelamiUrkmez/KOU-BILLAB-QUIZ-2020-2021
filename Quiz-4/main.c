#include <stdio.h>
#include <stdlib.h>
//MELIH SELAMI URKMEZ
int main()
{
  int ilkdeger,sondeger,kontrol=0;//kontrolu tanimlamamizin sebebi asal olup olmadigini kontrol ederken isimize yarayacaktir.
  printf("Ilk Deger:");
  scanf("%d",&ilkdeger);
  printf("Son Deger:");
  scanf("%d",&sondeger);
  printf("Asal sayilar %d ile %d arasindaki:\n",ilkdeger,sondeger);
  for(int i=ilkdeger;i<=sondeger;i++){//ilk degerden baslatip son deger dahil olacak sekilde for dongusu olusturuyoruz.
    if(i>1){//En kucuk asal sayi 2'dir.Bu yuzden kullanici negatif veya 2'den kucuk bir deger girerse diye if ile kontrol ediyoruz.
    for(int j=2;j<i;j++){//i degiskenini 2'den kendisine kadar her sayiya bolup bolunup bolunmedigini kontrol ediyoruz.
        if(i%j==0){//eger i dongude herhangi bir sayiya tam bolunurse kontrolu 1 e esitleyip donguyu kiriyoruz.
            kontrol=1;
            break;
        }
    }
    if(kontrol==0){//eger kontrol degiskeni basta tanimladigimiz gibi 0 ise sayimiz 2den kendisine kadar hicbir sayiya tam bolunmemistir.Bu da asal oldugunu gosterir.O yuzden ekrana yazdiriyoruz.
        printf("%d ",i);
    }
    else//eger sayimiz bir sayiya tam bolunduyse kontrolumuz 1 olur ve else girer.Bu da asal olmadigini gosterir.Yukarida kontrolu tekrar yapmak icin kontrol degerini tekrar 0'a esitliyoruz.
    kontrol=0;
  }}
    return 0;
}
