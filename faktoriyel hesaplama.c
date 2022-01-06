#include <stdio.h>
#include <stdlib.h>

int main() {
   // Faktoriyel hesaplama
   
   int i,sayi,faktoriyel;
   
   printf("Lutfen bir sayi giriniz: ");
   scanf("%d",&sayi);
   
   for(i=1;i<=sayi;i++)  // for döngüsünü 1 den baþaltýp girdiðim sayýya kadar tek tek arttýrdým
   {
   	faktoriyel=faktoriyel*i; // faktoriyeli hesaplayabilmesi için programa iþlemi tanýttým
   }
   printf("Girdiginiz sayinin faktoriyeli: %d",faktoriyel); // ekrana yazdýrdým

    // umarým faydalý olmuþtur iyi çalýþmalar
    // iyi çalýþmalar..

	return 0;
}
