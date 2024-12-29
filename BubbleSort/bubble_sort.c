#include <stdio.h>
#include <stdlib.h>
int bubblesort(int dizi[],int size){
int i,j;
int temp;
for(i=0;i<size-1;i++){
    for(j=0;j<size-i-1;j++){
        if(dizi[j]>dizi[j+1]){
         temp=dizi[j];
         dizi[j]=dizi[j+1];
         dizi[j+1]=temp;
      }
    }
  }
}

int main()
{
 int dizi[]={10,26,19,8,27,11,23};

 int boyut=sizeof(dizi)/sizeof(dizi[0]);
 bubblesort(dizi,boyut);
 printf("dizinin sirali hali :\n");
 for(int i=0;i<boyut;i++){
    printf("%d ",dizi[i]);
 }


    return 0;
}