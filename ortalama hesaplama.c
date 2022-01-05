#include <stdio.h>
#include <stdlib.h>

int main() {

    // DIÞARIDAN GÝRÝLEN ÝKÝ SINAV NOTUNU HESAPLAYAN VE ÖÐRENCÝNÝN ORTALAMASI 60VE ÜZERÝYSE "GEÇTÝ" 60DAN KÜÇÜKSE "KALDI" EKRANA YAZAN C KODU
    
    //vize=not*0.4
    //final=not*0.6
    
    
    int vize,final;
    float ortalama;
    
    printf("vize notunuzu giriniz: ");// vize notunu istedim
    scanf("%d",&vize);
    
    printf("final notunuzu giriniz: ");//final notunu istedim
    scanf("%d",&final);
    
    ortalama=(vize*0.4)+(final*0.6);// ortalamayi istedim iþlem önceliðine dikkat edin ben böyle yapýyorum siz farklý yapabilirsiniz
    printf("Ortalamaniz: %.2f\n",ortalama);// %.2f yapmamýn sebebi virgülden sonra iki hane göstermesini istedim siz 3,4,5 yapapilirsiniz ve \n boþluk býrakýr daha düzenli çýktý vermesi için
    
    if(ortalama>=60)// ortalama 60'a eþit ve büyükse ekrana ne yazmasý gerektiðini belirttim
    {
    	printf("GECTI");
	}
    else// ortalama 60'dan küçükse ne yapmasý gerektiðini belirttim
    {
    	printf("KALDI");
	}
    
    // umarým faydasý olmuþtur
    // iyi çalýþmalar..

	return 0;
}
