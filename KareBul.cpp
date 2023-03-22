/* 
Kendisine verilen bir parametrenin karesini bulan kareBul isimli bir fonksiyon yazýnýz.
*/
#include <stdio.h>

int kareBul(int sayi)
{
	return sayi*sayi;
}
int main()
{
	printf("Sayimizin karesi sudur : %d",kareBul(10));
	return 0;
}
