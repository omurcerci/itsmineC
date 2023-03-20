#include <stdio.h>
#include <stdlib.h>

void main()
{
	int boyut;
	printf("Dizi kac elemanli olacak : ");
	scanf("%d",&boyut);
	
	int dizi[boyut];
	srand(time(0));
	
	for( int i=0 ; i < boyut ; i++)
	{
		dizi[i]=rand%100;
	}
	printf("Dizi\n");
	
	for(int i=0;i<boyut;i++)
	{
		printf("%d\t",dizi[i]);
	}
	
	
	int toplam=0;
	for(int i=0;i<boyut;i++)
	{
		toplam = toplam+dizi[i];
	}
	int ortalama;
	ortalama = ortalama/boyut;
	
	printf("\n Dizi degerlerinin ortalamasi : %d",Ortalama);
	
	return 0;
}
