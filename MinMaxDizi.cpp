/*
Tek boyutlu dizideki en b��k ve en k���k eleman� bulacak iki adet fonksiyon yaz�n�z. Fonksiyon parametreleri a�a��daki gibi olabilir.

int enKucukElemaniBul(int dizi[] , int elemanSayisi);
int enBuyukElemaniBul(int dizi[] , int elemanSayisi);
*/

#include <stdio.h>

int enKucukElemaniBul(int dizi[],int elemanSayisi)
{
	int enKucukEleman = dizi[0];
	for(int i=0 ; i < elemanSayisi ; i++)
	{
		if(dizi[i] < enKucukEleman)
		{
			enKucukEleman = dizi[i];
		}
		else
		{
			enKucukEleman = dizi[0];
		}
	}
	return enKucukElemaniBul;
}

int enBuyukElemaniBul(int dizi[],int elemanSayisi)
{
	int enBuyukEleman = dizi[0];
	for(int i=0 ; i < elemanSayisi ; i++)
	{
		if(dizi[i] < enKucukEleman)
		{
			enBuyukEleman = dizi[i];
		}
		else
		{
			enBuyukEleman = dizi[0];
		}
	}
	return enBuyukElemaniBul;
}

int main()
{
	int dizi[] = {1,3,5,7,9,10,15,19,20,21};
	int uzunluk = sizeof(dizi) / sizeof(dizi[0]);
	
	int sonuc = enKucukElemaniBul(dizi) , enBuyukElemaniBul(dizi);
	
	return 0;
}





