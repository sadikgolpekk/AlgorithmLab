#include <stdio.h>
#include <stdlib.h>
int insertionsort(int dizi[],int size){
int i,temp;
int yer;
for(i=1;i<size;i++){ // teker teker bütün elemanlar icin aralara sokustur(ilki haric)
    temp=dizi[i];
    yer=i;
    while(yer>0 && dizi[yer-1]>temp){
        dizi[yer]=dizi[yer-1];
        yer--;
    }
    dizi[yer]=temp;

      }
}

int main()
{
 int dizi[]={10,26,19,8,27,11,13};

 int boyut=sizeof(dizi)/sizeof(dizi[0]);
 insertionsort(dizi,boyut);
 printf("dizinin sirali hali :\n");
 for(int i=0;i<boyut;i++){
    printf("%d ",dizi[i]);
 }


    return 0;
}