#include <stdio.h>
#include <stdlib.h>

int main() {
    //  karenin çevresinin ve alanýný hesaplayan c kodu
    
    int cevre,alan,kenar;
    
    printf(" Kenar uzunlugunu griniz: ");
    scanf("%d",&kenar); 

    cevre=4*(kenar);
    alan=kenar*kenar;
	
	printf("Karenizin cevresi: %d\n",cevre);
	printf("Karenizin alani: %d",alan);

    // umarým faydasý olmuþtur
    // iyi çalýþmalar..

	return 0;
}
