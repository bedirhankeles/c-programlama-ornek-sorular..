#include <stdio.h>
#include <stdlib.h>

int main() {
    // n kadar girilen sayýdan çift olanlarý ayrý tek olanlarý ayrý toplan c kodu
	//n=klavyeden gireceðimiz herhangi bir sayý
	
	
	int n,cift_toplam=0,tek_toplam=0,i,sayi; // tek ve cift sayilar için ayrý toplam deðiþkenleri atadým, i döngü için
	
	printf("Sayi adedi giriniz: ");
	scanf("%d",&n);
	
    for(i=0;i<n;i++) // döngü sýfýrdan baþlayacak n'e kadar gelecek ve tek tek artacak
    {
    	printf("%d.sayiyi giriniz: ",i+1); // döngünün içinde n adet sayýmý istiyorum -- i+1 yazmamýn sebebi 1. sayi 2.sayi diye çýktý vermesi için
    	scanf("%d",&sayi);
    	
    	if(sayi%2==0) // gireceðim sayi 2 ye tam bölünüyorsa demek parantezin içi bunu neden yaptý þimdi diye sorarsanýz sayi ikiye bölünüyorsa çifttir kalan 0 olur
    	{
    		cift_toplam=cift_toplam+sayi;
		}
		else if(sayi%2==1) // girilen sayi 2 ye bölünmüyorsa tektir ve kalan hep bir olur -- else if devam ettirir else derseniz parantez içine bir þey yazamazsýnýz
		{
			tek_toplam=tek_toplam+sayi;
		}
	}
	printf("Cift sayilarin toplami: %d\n",cift_toplam); // ciftlerin toplami
	printf("Tek sayilarin toplami: %d",tek_toplam); // teklerin toplami
 

    // umarým faydasý olmuþtur
    // iyi çalýþmalar..

	return 0;
}
