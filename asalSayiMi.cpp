/*
Kendisine parametre olarak verilen bir sayýnýn asal olup olmadýðýný bulan bir fonksiyon yazýnýz. Bu fonksiyon eðer parametre olarak gelen sayý asal ise 1 deðerini dondürsün.
Deðilse 0 deðerini dondürsün.
Fonksiyonnun adý asalSayiMi olsun. 
*/
#include <stdio.h>

int asalSayiMi(int sayi)
{
	int i;
	for(i=2;i<sayi;i++)
	{
		if(sayi % i== 0)
		{
			printf("Bu sayi asal bir sayi degildir.");
			return 0;
		}
		else
		{
			printf("Bu sayi asal bir sayidir. ");
			return 1;
			
		}
	}
}
int main()
{
	int a;
	printf("Kontrol etmek istediðiniz sayýyý giriniz : ");
	scanf("%d",&a);
	printf("%d sayisi kontrol sonucunda \n",a,asalSayiMi(a));
	
	
	
	return 0;
}
