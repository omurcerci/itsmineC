/*
Kendisine eelen iki parametreye gore ilk sayýnýn ikinci sayý cinsinden kuvvetini hesaplayan bir fonksiyon yazýnýz.
Orneðin ; fonksiyon parametreleri 2 ve 5 ise fonksiyon ; 25 deðerini hesaplasýn.
*/
#include <stdio.h>
#include <math.h>

int usluSayi(int sayi1,int sayi2)
{
	return pow(sayi1,sayi2);
}

int main()
{
	int x,y;
	printf("%d sayisi ile %d sayisinin üstel iþlem sonucu %d dir",x,y,usluSayi(2,5));
	
	return 0;
}
