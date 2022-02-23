#include <stdio.h>
#include <stdlib.h>

int main() {


// bir maddenin scýaklýk deðerine göre entalpi deðerini ne durumda olduðunu gösteren c kodu


int sicaklik;

printf(" Maddenizin sicaklik degerini giriniz: ");
scanf("%d",&sicaklik);

if(sicaklik==0)
{
	printf("Entalpiniz kritik noktada");
}
else if(sicaklik==1)
{
	printf("Entalpiniz yuksek");
}
 else if(sicaklik<-1)
{
	printf("Entalpiniz dusuk");
}


    // umarým faydalý olmuþtur iyi çalýþmalar
    // iyi çalýþmalar..

	return 0;
}
