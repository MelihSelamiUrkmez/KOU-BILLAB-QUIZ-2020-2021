#include <stdio.h>
#include <stdlib.h>
//MELIH SELAMI URKMEZ
int main()
{
srand(time(NULL));
int dizi[10];
for(int i=0;i<10;i++){
    dizi[i]=rand()%101;
}// dizi elemanlarini 0 ile 100(dahil) arasinda rastgele degerler ile tanimliyoruz.
printf("Rastgele Sayilar:\n");
for(int i=0;i<10;i++){//olusturdugumuz rastgele elemanli diziyi yazdiriyoruz.
    printf("%d ",dizi[i]);
}
printf("\nSirali Dizi:\n");//Bubble Sort(Kabarcik Algoritmasi) kullanarak dizinin elemanlarini kucukten buyuge sekilde siraliyoruz.
for(int i=0;i<10;i++){
    for(int j=0;j<10-i;j++){
            if(dizi[j]>dizi[j+1]){
                int temp=dizi[j+1];
                dizi[j+1]=dizi[j];
                dizi[j]=temp;
            }

    }
}
for(int i=0;i<10;i++){//kucukten buyuge siralanmis diziyi ekrana yazdiriyoruz.
    printf("%d ",dizi[i]);
}
printf("\nOnce tek sayilar,sonra cift sayilar sirali dizi:\n");
for(int i=0;i<10;i++){//dizi elemanlarini tek tek dolasarak tek olanlari basa yazdiriyoruz.
    if(dizi[i]%2!=0){
        printf("%d ",dizi[i]);
    }
}
for(int i=0;i<10;i++){//tekrar dizi elemanlarini tek tek dolasarak teklerin yanina da ciftleri yazdiriyoruz.
    if(dizi[i]%2==0){
        printf("%d ",dizi[i]);
    }
}
    return 0;
}
