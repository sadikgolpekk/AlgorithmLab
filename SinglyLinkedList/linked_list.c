#include <stdio.h>
#include <stdlib.h> // malloc icin
struct n{

int yas; // data
struct n *next; // pointer

};
typedef struct n node;

int main(){

node *root;
node *temp; // araya ekleme
node *basdugum; // başa ekleme
node *sondugum; // sona ekleme
node *iter; // gezinmesi icin
node *sil;



root=(node*)malloc(sizeof(node)); // ilk node
root->yas=15;
root->next=NULL;
printf("%d ",root->yas);


root->next=(node*)malloc(sizeof(node)); // ikinci node
root->next->yas=27;
root->next->next=NULL;
printf("%d ",root->next->yas);


root->next->next=(node*)malloc(sizeof(node)); // ucuncu node
root->next->next->yas=59;
root->next->next->next=NULL;
printf("%d ",root->next->next->yas);



temp=(node*)malloc(sizeof(node)); // araya sokulacak şey
temp->yas=31;
// temp
temp->next=root->next->next; // temp'in next'ini eski 59'a bağla.
root->next->next=temp;   // root->next->next'i temp'e bağla (yani 27'nin sonrasına 31 ekle).

printf("Araya sokma\n");
printf("%d ",root->yas);
printf("%d ",root->next->yas);
printf("%d ",root->next->next->yas);
printf("%d ",root->next->next->next->yas);




basdugum=(node*)malloc(sizeof(node)); // basa ekleme
basdugum->yas=10;

basdugum->next=root; // bastaki referans adresi ile bagla
root=basdugum;



printf("\nBasa ekleme:\n");
printf("%d ",root->yas);
printf("%d ",root->next->yas);
printf("%d ",root->next->next->yas);
printf("%d ",root->next->next->next->yas);
printf("%d",root->next->next->next->next->yas);


sondugum=(node*)malloc(sizeof(node));
sondugum->yas=100;
sondugum->next=NULL;


iter=root;
int sayac=0;
while(iter->next!=NULL){
    iter=iter->next;
    sayac++;

}


iter->next=sondugum;

printf("\nSona ekleme:\n");
printf("%d ",root->yas);
printf("%d ",root->next->yas);
printf("%d ",root->next->next->yas);
printf("%d ",root->next->next->next->yas);
printf("%d ",root->next->next->next->next->yas);
printf("%d",root->next->next->next->next->next->yas);


sil=root->next->next; // eleman silme
root->next->next=sil->next;
free(sil);

printf("\nSilme:\n");
printf("%d ",root->yas);
printf("%d ",root->next->yas);
printf("%d ",root->next->next->yas);
printf("%d ",root->next->next->next->yas);
printf("%d",root->next->next->next->next->yas);




    return 0;
}
