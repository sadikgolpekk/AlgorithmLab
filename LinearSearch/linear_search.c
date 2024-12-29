#include <stdio.h>
#include <stdlib.h>
int dogrusalarama(int dizi[],int size,int aranacak){
for(int a=0;a<size;a++){

    if(aranacak==dizi[a]){
        return a;
    }
}
 return -1;
}

int main() // 10 14 19 26 27 31 33
{
 int girilecek;
 printf("Lutfen bir sayi giriniz: ");
 scanf("%d",&girilecek);
 int dizi[7]={10,14,19,26,27,31,33};
 int aranacak=girilecek;
 int cevap=dogrusalarama(dizi,7,aranacak);
 if(cevap==-1){
printf("aranan eleman dizide bulunamadi");
 }
 else{
    printf("aranan eleman %d.indiste\n",cevap);
 }

    return 0;
}