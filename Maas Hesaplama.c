#include <stdio.h>
#include <stdlib.h>

int main() {

    // Maaþý ve zam oraný verilen bir öðretmenin yeni maaþýný hesaplayan c kodu
    
    int maas,zamorani;
    float yenimaas;
    
    printf("Eski maasinizi giriniz: ");  // eski maasini istedim
    scanf("%d",&maas);
    
    printf("Maaasiniza yapilan zam oranini giriniz: "); // zam oranini istedim
    scanf("%d",&zamorani);
    
    yenimaas=maas+(maas*zamorani/100); // yeni maasi bulmasý için programa yapmasý gereken islemleri girdim
    printf("Yeni Maasiniz: %.2f",yenimaas); // ekrana yazdýrdým
    
    // umarým faydasý olmuþtur
    // iyi çalýþmalar..

	return 0;
}
