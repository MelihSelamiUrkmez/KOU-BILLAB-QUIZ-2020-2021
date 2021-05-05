#include <stdio.h>
#include <stdlib.h>
//MELIH SELAMI URKMEZ
int main()
{
srand(time(NULL));

int matrisboyutu;

printf("Kare matris boyutu giriniz:");
scanf("%d",&matrisboyutu);
int matris[matrisboyutu][matrisboyutu];
 for(int i=0;i<matrisboyutu;i++){//matris elemanlari 1 ile 10 arasinda rastgele ataniyor.
    for(int j=0;j<matrisboyutu;j++){
        matris[i][j]=rand()%10;
    }
 }
 printf("\nRastgele atanan matris:\n");//rastgele atanan matris yazdiriliyor.
 for(int i=0;i<matrisboyutu;i++){
    for(int j=0;j<matrisboyutu;j++){
        printf("%d ",matris[i][j]);
    }
    printf("\n");
 }
printf("\nGuncel matris(Kosegenler degisti):\n");
for(int i=0;i<matrisboyutu;i++){
    for(int j=0;j<matrisboyutu;j++){
        if(i==j){//eger satir ile sutun degeri birbirine esit ise kosula gir diyoruz(kosegen elemani ise)
           int gecici= matris[i][j];
           matris[i][j]=matris[i][matrisboyutu-i-1];
           matris[i][matrisboyutu-i-1]=gecici;
        }
    }
}
for(int i=0;i<matrisboyutu;i++){//kosegenleri degistirilmis elemani yazdiriyoruz.
    for(int j=0;j<matrisboyutu;j++){
        printf("%d ",matris[i][j]);
    }
    printf("\n");
}


    return 0;
}
