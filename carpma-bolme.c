#include <stdio.h>
#include <stdlib.h>

int main() {
	
// disaridan girilen iki adet sayiyi carpan ve bolen c kodu


   int sayi1,sayi2,carp,bol;
   
   printf("birinci sayiyi giriniz: ");
   scanf("%d",&sayi1);
   
   printf("ikinci sayiyi giriniz: ");
   scanf("%d",&sayi2);
   
   carp=sayi1*sayi2;
   printf("carpma islemninin sonucu: %d",carp);
   
   bol=sayi1/sayi2;
   printf("bolme isleminin sonucu: %d",bol);
 
 
   // aciklama cümleleri yapmadim cunku ilk yukeldigim topalam cikarma ile mantigi aynidir..


	return 0;
}
