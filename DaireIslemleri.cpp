/*
Dairenin cevre ve alan hesaplamasi

Yaricapi verilen bir dairenin çevresini ve alanýný bulan cevreHesapla ve alanHesapla isimli iki adet fonksiyon yazýnýz. 
*/

#include <stdio.h>
#include <math.h>
#define PI 3.14

double cevreHesapla(double yaricap)
{
	
	return 2 * PI * yaricap;

}
double alanHesapla(double yaricap)
{
	return PI * yaricap * yaricap;
	
}
int main()
{
	
	double r;
	
	printf("Yaricapi giriniz : ");
	scanf("%f",&r);
	
	printf("Dairenin cevresi %f dir",cevreHesapla(5.0));
	
	printf("Dairenin alani %f dir",alanHesapla(5.0));
	
	
	return 0;
}
