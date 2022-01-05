#include <stdio.h>
#include <stdlib.h>

int main() {
    // n kadar girilen sayıdan çift olanları ayrı tek olanları ayrı toplan c kodu
	//n=klavyeden gireceğimiz herhangi bir sayı
	//n değerini siz istediğiniz sayi yapabilirsiniz  mesela 1 den 100 e kadar olan cift sayilarin toplamı gibi
	
	int n,cift_toplam=0,tek_toplam=0,i,sayi; // tek ve cift sayilar için ayrı toplam değişkenleri atadım, i döngü için
	
	printf("Sayi adedi giriniz: ");
	scanf("%d",&n);
	
    for(i=0;i<n;i++) // döngü sıfırdan başlayacak n'e kadar gelecek ve tek tek artacak
    {
    	printf("%d.sayiyi giriniz: ",i+1); // döngünün içinde n adet sayımı istiyorum -- i+1 yazmamın sebebi 1. sayi 2.sayi diye çıktı vermesi için
    	scanf("%d",&sayi);
    	
    	if(sayi%2==0) // gireceğim sayi 2 ye tam bölünüyorsa demek parantezin içi bunu neden yaptı şimdi diye sorarsanız sayi ikiye bölünüyorsa çifttir kalan 0 olur
    	{
    		cift_toplam=cift_toplam+sayi;
		}
		else if(sayi%2==1) // girilen sayi 2 ye bölünmüyorsa tektir ve kalan hep bir olur -- else if devam ettirir else derseniz parantez içine bir şey yazamazsınız
		{
			tek_toplam=tek_toplam+sayi;
		}
	}
	printf("Cift sayilarin toplami: %d\n",cift_toplam); // ciftlerin toplami
	printf("Tek sayilarin toplami: %d",tek_toplam); // teklerin toplami
 

    // umarım faydası olmuştur
    // iyi çalışmalar..

	return 0;
}
