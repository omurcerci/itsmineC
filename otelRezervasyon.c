#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Müþteri verilerini tutan bir yapý oluþturuyoruz.
/*
Yapý (Struct) : Birbirleriyle iliþkili deðiþkenlerin , bir isim altýnda toplanmasýna yapý adý verilir.
Yapýlar,deðiþik veri tiplerinde elemanlar içerebilirler ve dosya içinde tutulacak kayýtlarý oluþturmakta kullanýlýr.
Burada müþteri bilgilerinin bir alanda tutulabilmesi ve oteldeki oda numarasý,oda ücreti gibi deðiþkenlerin bir arada tutulabilmesi için kullanýlmýþtýr.

Yapýlar, diðer tipte nesneler kullanýlarak oluþturulan , türetilmiþ veri tipleridir.

struct ogrenci
{
public char[]ad = new char[20];
public char[]soyad = new char[10];
public long no;
public short sinif;
}


*/
struct Customer
{
	char name[50];
	char surname[50];
	char phone[15];
	char email[50];
	
	int roomNumber;
	int days;
	float price;
};

// Müþteri veritabanýmýzý tutacak bir dizi oluþturuyoruz. ( structta aldýðýmýz müþteri bilgilerini tutmak için)

struct Customer customers[1000];

// Rezervsayonu iþleyen bir fonksiyon.

void makeReservation()
{
	int roomNumber , days;
	char name[50],surname[50],phone[15],email[50];
	
	printf("Otelimizdeki mevcut odalar 101,102,103,201,202,203 \n");
	printf("Lütfen bir oda numarasý seçiniz : ");
	scanf("%d",&roomNumber);
	
	printf("Lütfen adýnýzý giriniz : ");
	scanf("%s",&name);
	
	printf("Lütfen soyadýnýzý giriniz :");
	scanf("%s",&surname);
	
	printf("Lütfen telefon numaranýzý giriniz :");
	scanf("%s",&phone);
	
	printf("Lütfen e-posta adresinizi giriniz : ");
	scanf("%s",&email);
	
	printf("Kaç gün kalmak istersiniz");
	scanf("%d",&days);
	
	
	
	// Müþteri verilerini dizimize ekliyoruz.
	
/*strcpy( ) fonksiyonu: Bir katarý, bir baþka katara kopyalamak için kullanýlýr. Katarlar ayný boyutta olmak zorunda deðildir.
strcpy fonksiyonu, bir karakter dizisini (string) baþka bir karakter dizisine kopyalamak için kullanýlýr. Ýki parametre alýr: hedef (destination) ve kaynak (source).
	
customers[roomNumber-1].name ifadesi,
müþteri bilgilerinin depolandýðý customers dizisinde, belirli bir odaya karþýlýk gelen roomNumber indeksli veri yapýsýnýn name özelliðine (bir karakter dizisi) eriþmek için kullanýlýr.
name ise, makeReservation fonksiyonunun ilk parametresidir ve kullanýcýdan alýnan müþteri adýný içerir.
Dolayýsýyla strcpy(customers[roomNumber-1].name, name); ifadesi, name karakter dizisindeki müþteri adýný, 
customers dizisindeki belirli bir odadaki müþterinin name özelliðine kopyalar. Böylece, makeReservation fonksiyonu
müþterinin adýný kaydeder ve rezervasyon iþlemini tamamlar.
*/
	strcpy(customers[roomNumber-1].name, name);
    strcpy(customers[roomNumber-1].surname, surname);
    strcpy(customers[roomNumber-1].phone, phone);
    strcpy(customers[roomNumber-1].email, email);
    customers[roomNumber-1].roomNumber = roomNumber;
    customers[roomNumber-1].days = days;
    customers[roomNumber-1].price = 100 * days; // 100 TL günlük oda ücreti.
}


// Müþteri bilgilerini gorüntüleyen fonksiyon.

void displayCustomer(int roomNumber)
{
	printf("\n Ad : %s %s \n",customers[roomNumber-1].name,customers[roomNumber-1].surname);
	printf("Telefon: %s\n", customers[roomNumber-1].phone);
    printf("E-posta: %s\n", customers[roomNumber-1].email);
    printf("Oda Numarasý: %d\n", customers[roomNumber-1].roomNumber);
    printf("Kalacaðý Gün Sayýsý: %d\n", customers[roomNumber-1].days);
    printf("Toplam Ücret: %.2f TL\n", customers[roomNumber-1].price);
}


// Ana fonksiyon.


int main()
{
	int choice,roomNumber;
	
	do
	{
		printf("\n Otel rezervasyon sistemi \n");
		printf("1. Rezervasyon Yap \n");
		printf("2. Rezervasyonlarý Goruntule \n");
		printf("3. Cikis \n");
		printf("Seciniz : ");
		scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			makeReservation();
				break;
		case 2:
			printf("Lütfen gorüntülemek istediginiz oda numarasýný giriniz : ");
			scanf("%d",&roomNumber);
			displayCustomer(roomNumber);
			break;
		case 3:
			printf("Geçersiz seçim. \n");
			break;
	} 
	
	}while(choice != 3);
	return 0;
}














