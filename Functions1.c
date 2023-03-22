#include <stdio.h>
#include <stdlib.h>

int minimum(int sayi1,int sayi2)
{
	if(sayi1 > sayi2)
	{
		return sayi2;
	}
	else
	{
		return sayi1;
	}
}

int maximum(int sayi1,int sayi2)
{
	if(sayi1 > sayi2)
	{
		return sayi1;
	}
	else
	{
		return sayi2;
	}
}

int main()
{
	
	int x,y;
	printf("Sayilari giriniz :");
	scanf("%d %d",&x,&y);
	printf("Minimum sayi  :  %d \n Maximum sayi : %d",minimum(x,y),maximum(x,y));
	
	
	
	
	return 0;
}
