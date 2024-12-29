#include <stdio.h>
#include <stdlib.h>
int ikiliarama(int dizi[],int size,int aranan){

int baslangic=0; // dizi basi
int bitis=size-1; // dizinin sonu
int orta;

while(baslangic<=bitis){
    orta=(baslangic+bitis)/2;

    if(dizi[orta]==aranan){ // esitse dondur
        return orta;
    }
    if(dizi[orta]>aranan){ // aranan kucukse
        bitis=orta-1;  // aranandan buyuk ihtimalleri yok et
    }
    else{ // aranan buyukse
        baslangic=orta+1; // aranandan kucuk ihtimalleri yok et
    }

}
 return -1; // eger eleman bulunamazsa -1 dondur


}

int main()
{
 int dizi[]={10,14,19,26,27,31,33};
 int aranan;
 scanf("%d",&aranan);
 int boyut=sizeof(dizi)/sizeof(dizi[0]);
 int sonuc=ikiliarama(dizi,boyut,aranan);

 if(sonuc==-1){
    printf("aranan eleman dizide yok");
 }
 else{
   printf("Aranan eleman indisi %d",sonuc);
 }

    return 0;
}