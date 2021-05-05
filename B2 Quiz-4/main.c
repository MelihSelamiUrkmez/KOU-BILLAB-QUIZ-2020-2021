#include <stdio.h>
#include <string.h>
//MELIH SELAMI URKMEZ
int sayac=0;

int *sayiBul(char *str)
{
    int i=0;
    char *cp;
    static int sayi[100]={0};
    sayac=0;

    do
    {
        if(str[i]>=48 && str[i]<=57)//Eger karakterin ascii degeri 48 ve 57 arasinda ise bunu strtol ile long inte cevir ve sonra int e cevir dongusu
        {
            sayi[sayac]=(int)strtol(&str[i], &cp, 10);
            sayac++;
            str=cp;
            i=0;
        }
        i++;
    }while(str[i]!='\0');

    return sayi;
}
void sayiSirala(int *sirala)//bubble sort ile dizi elemanlarini siralama dongusu
{
   int i, j;
   for (i = 0; i < sayac-1; i++)
       for (j = 0; j < sayac-i-1; j++)
           if (sirala[j] > sirala[j+1])
           {
                int temp = sirala[j];
                sirala[j] = sirala[j+1];
                sirala[j+1] = temp;
           }
}

int main()
{
    int boyut=0;
    printf("Girilecek string boyutunu giriniz:");
    scanf("%d",&boyut);

    char p[boyut];
    int *stringSayi;
    int i=0;
    printf("String Giriniz:\n");
    scanf("%s",p);
    stringSayi=sayiBul(p);
    sayiSirala(stringSayi);

    printf("\n\nSirali Dizi: ");
    for(i=0;i<sayac;i++)
    {
        printf("%d ",stringSayi[i]);
    }

    return 0;
}
