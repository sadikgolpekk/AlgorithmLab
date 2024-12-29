#include <stdio.h>
#include <stdlib.h>
int selectionsort(int dizi[],int size){
int i;
int temp;
int enkucukindis;
for(i=0;i<size-1;i++){
    enkucukindis=i;
    for(int j=i+1;j<size;j++){
        if(dizi[j]<dizi[enkucukindis]){
            enkucukindis=j;
        }
    }
    temp=dizi[enkucukindis];
    dizi[enkucukindis]=dizi[i];
    dizi[i]=temp;
}

}

int main()
{
 int dizi[]={10,26,19,8,17,11,33};

 int boyut=sizeof(dizi)/sizeof(dizi[0]);
selectionsort(dizi,boyut);
 printf("dizinin sirali hali :\n");
 for(int i=0;i<boyut;i++){
    printf("%d ",dizi[i]);
 }


    return 0;
}