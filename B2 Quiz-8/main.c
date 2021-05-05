#include <stdio.h>
#include <stdlib.h>
/*
MELÝH SELAMÝ URKMEZ
200202010*/
//Notlari rand atarken 0.indisi matematik 1.indisi fizik ve 2. indisi kimya olarak dusundum.Kodtaki tum isleyis buna gore gidiyor
struct Ogrenci{
int ogrenci_id;
int aldigi_vize_notlari[3];
int aldigi_final_notlari[3];
};
int kullanicidegeri;

void ortalama_bul(struct Ogrenci *ptr,float *x1,float *x2,float *y1,float *y2,float *z1,float *z2){
float toplam1=0,toplam2=0,toplam3=0,toplam4=0,toplam5=0,toplam6=0;
for(int i=0;i<kullanicidegeri;i++){
    toplam1+=ptr[i].aldigi_vize_notlari[0];//mat vize toplami
    toplam2+=ptr[i].aldigi_final_notlari[0];//mat final toplami
}
toplam1=toplam1/kullanicidegeri;
toplam2=toplam2/kullanicidegeri;
for(int i=0;i<kullanicidegeri;i++){
    toplam3+=ptr[i].aldigi_vize_notlari[1];//fizik vize toplami
    toplam4+=ptr[i].aldigi_final_notlari[1];//fizik final toplami
}
toplam3=toplam3/kullanicidegeri;
toplam4=toplam4/kullanicidegeri;
for(int i=0;i<kullanicidegeri;i++){
    toplam5+=ptr[i].aldigi_vize_notlari[2];//fizik vize toplami
    toplam6+=ptr[i].aldigi_final_notlari[2];//fizik final toplami
}
toplam5=toplam5/kullanicidegeri;
toplam6=toplam6/kullanicidegeri;
*x1=toplam1;
*x2=toplam2;
*y1=toplam3;
*y2=toplam4;
*z1=toplam5;
*z2=toplam6;
}
void random_not(struct Ogrenci *ptr){
srand(time(NULL));
for(int i=0;i<kullanicidegeri;i++){
    ptr[i].ogrenci_id=1+rand()%100;
    for(int j=0;j<3;j++){
        ptr[i].aldigi_vize_notlari[j]=1+rand()%100;
        ptr[i].aldigi_final_notlari[j]=1+rand()%100;
    }
}
}
int main()
{
int mat_id=123;
int fizik_id=897;
int kimya_id=567;
float mat_ort_vize,mat_ort_final,fizik_ort_vize,fizik_ort_final,kimya_ort_vize,kimya_ort_final;
printf("Kac adet ogrenci olacagini giriniz:");
scanf("%d",&kullanicidegeri);
struct Ogrenci *dizi=(struct Ogrenci*)calloc(kullanicidegeri,sizeof(struct Ogrenci));
random_not(dizi);
ortalama_bul(dizi,&mat_ort_vize,&mat_ort_final,&fizik_ort_vize,&fizik_ort_final,&kimya_ort_vize,&kimya_ort_final);
printf("Matematik ders id:%d vize ort:%f final ort:%f\n",mat_id,mat_ort_vize,mat_ort_final);
printf("Fizik ders id:%d vize ort:%f final ort:%f\n",fizik_id,fizik_ort_vize,fizik_ort_final);
printf("Kimya ders id:%d vize ort:%f final ort:%f\n",kimya_id,kimya_ort_vize,kimya_ort_final);
int ders_no;
printf("Durumunu ogrenmek istediginiz dersin idsini giriniz:");
scanf("%d",&ders_no);

if(ders_no==123){
    printf("Matematik Ders Durumu:\n");
    for(int i=0;i<kullanicidegeri;i++){
        for(int j=0;j<kullanicidegeri-1-i;j++){
            if(dizi[j].aldigi_final_notlari[0]<dizi[j+1].aldigi_final_notlari[0]){
                struct Ogrenci gecici;
                gecici=dizi[j];
                dizi[j]=dizi[j+1];
                dizi[j+1]=gecici;
            }
        }}

 for(int j=0;j<kullanicidegeri;j++){
        printf("Ogrenci id:%d vize:%d final:%d\n",dizi[j].ogrenci_id,dizi[j].aldigi_vize_notlari[0],dizi[j].aldigi_final_notlari[0]);
 }
}
else if(ders_no==897){

  printf("Fizik Ders Durumu:\n");
    for(int i=0;i<kullanicidegeri;i++){
        for(int j=0;j<kullanicidegeri-1-i;j++){
            if(dizi[j].aldigi_final_notlari[1]<dizi[j+1].aldigi_final_notlari[1]){
                struct Ogrenci gecici;
                gecici=dizi[j];
                dizi[j]=dizi[j+1];
                dizi[j+1]=gecici;
            }
        }}

 for(int j=0;j<kullanicidegeri;j++){
        printf("Ogrenci id:%d vize:%d final:%d\n",dizi[j].ogrenci_id,dizi[j].aldigi_vize_notlari[1],dizi[j].aldigi_final_notlari[1]);
 }
}
else if(ders_no==567){
     printf("Kimya Ders Durumu:\n");
    for(int i=0;i<kullanicidegeri;i++){
        for(int j=0;j<kullanicidegeri-1-i;j++){
            if(dizi[j].aldigi_final_notlari[2]<dizi[j+1].aldigi_final_notlari[2]){
                struct Ogrenci gecici;
                gecici=dizi[j];
                dizi[j]=dizi[j+1];
                dizi[j+1]=gecici;
            }
        }}

 for(int j=0;j<kullanicidegeri;j++){
        printf("Ogrenci id:%d vize:%d final:%d\n",dizi[j].ogrenci_id,dizi[j].aldigi_vize_notlari[2],dizi[j].aldigi_final_notlari[2]);
 }
}
else{
    printf("Girilen ders kodu hicbir ders ile eslesmiyor.");
}





    return 0;
}
