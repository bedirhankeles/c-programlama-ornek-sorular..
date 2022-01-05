#include <stdio.h>
#include <stdlib.h>

int main() {
   //1'den n'e kadar olan sayýlarýn toplamý
   
   int i,toplam=0,n;
   
   printf("Hangi sayiya kadar toplam degeri istiyorsunuz: ");
   scanf("%d",&n);

   for(i=1;i<=n;i++)
   {
   	toplam=toplam+i;
   }
   printf("Istediginiz sayiya kadar olan tum sayilarin toplami: %d",toplam);
    // umarým faydasý olmuþtur
    // iyi çalýþmalar..

	return 0;
}
