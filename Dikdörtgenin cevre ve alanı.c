#include <stdio.h>
#include <stdlib.h>

int main() {
    //  Dikdörtgenin çevresinin ve alanýný hesaplayan ckodu
    
    int cevre,alan,kisakenar,uzunkenar;
    
    printf("Dikdortgenin kisa kenarinin giriniz: "); // kisa kenari istedim
    scanf("%d",&kisakenar);
    
    printf("Dikdortgenin uzun kenarini giriniz: "); // uzun kenari istedim
    scanf("%d",&uzunkenar);
    
    cevre=(2*kisakenar)+(2*uzunkenar); // cevrenin ne olduðu programa tanýttým
    alan=kisakenar*uzunkenar;   // alanýn ne olduðunu programa tanýttým
    
    printf("Dikdortgeninizin cevresi: %d\n",cevre); //cevreyi ekrana yazdýrdým
    printf("Dikdortgeninizin alani: %d",alan); // alaný ekrana yazdýrdým
    
    // umarým faydasý olmuþtur
    // iyi çalýþmalar..

	return 0;
}
