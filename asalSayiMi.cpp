/*
Kendisine parametre olarak verilen bir say�n�n asal olup olmad���n� bulan bir fonksiyon yaz�n�z. Bu fonksiyon e�er parametre olarak gelen say� asal ise 1 de�erini dond�rs�n.
De�ilse 0 de�erini dond�rs�n.
Fonksiyonnun ad� asalSayiMi olsun. 
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
	printf("Kontrol etmek istedi�iniz say�y� giriniz : ");
	scanf("%d",&a);
	printf("%d sayisi kontrol sonucunda \n",a,asalSayiMi(a));
	
	
	
	return 0;
}
