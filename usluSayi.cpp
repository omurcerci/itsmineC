/*
Kendisine eelen iki parametreye gore ilk say�n�n ikinci say� cinsinden kuvvetini hesaplayan bir fonksiyon yaz�n�z.
Orne�in ; fonksiyon parametreleri 2 ve 5 ise fonksiyon ; 25 de�erini hesaplas�n.
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
	printf("%d sayisi ile %d sayisinin �stel i�lem sonucu %d dir",x,y,usluSayi(2,5));
	
	return 0;
}
