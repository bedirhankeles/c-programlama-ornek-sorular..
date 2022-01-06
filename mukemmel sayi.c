#include <stdio.h>
#include <stdlib.h>

int main() {
  // kendisi hariç pozitif tamsayý çarpanlarýnýn toplamý kendisine eþit olan sayýlara mükemmel sayý denir..
  // hadi yapalým
  
  int sayi,toplam=0,i;
   
   printf("Bir sayi giriniz: ");
   scanf("%d",&sayi);
   
   for(i=1;i<sayi;i++)
   {
   	if(sayi%i==0)
   	{
   	toplam+=i;
   	}
   }
   if(toplam==sayi)
   {
   	printf("Girdiginiz sayi mukemmel sayidir");
   }
   else
   {
   	printf("girdiginiz sayi mukemmel sayi degildir");
   }

    // umarým faydalý olmuþtur iyi çalýþmalar
    // iyi çalýþmalar..

	return 0;
}
