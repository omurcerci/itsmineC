/* 
Tek boyutlu bir dizideki tüm elemanlarýn toplamýný veren bir fonksiyon yazýnýz.
*/

#include <stdio.h>

int toplam(int dizi[],int uzunluk)
{
	int toplam = 0;
	
	for( int i =0 ; i<uzunluk ; i++)
	{
		toplam += dizi[i];
	}
	return toplam;
}

int main()
{
	int dizi[] = {1,2,3,4,5};
	int uzunluk = sizeof(dizi) / sizeof(dizi[0]);
	int sonuc = toplam(dizi , uzunluk);
	printf("Dizideki elemanlarin toplami : %d",sonuc);
	return 0;
	
}
