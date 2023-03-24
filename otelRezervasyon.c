#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// M��teri verilerini tutan bir yap� olu�turuyoruz.
/*
Yap� (Struct) : Birbirleriyle ili�kili de�i�kenlerin , bir isim alt�nda toplanmas�na yap� ad� verilir.
Yap�lar,de�i�ik veri tiplerinde elemanlar i�erebilirler ve dosya i�inde tutulacak kay�tlar� olu�turmakta kullan�l�r.
Burada m��teri bilgilerinin bir alanda tutulabilmesi ve oteldeki oda numaras�,oda �creti gibi de�i�kenlerin bir arada tutulabilmesi i�in kullan�lm��t�r.

Yap�lar, di�er tipte nesneler kullan�larak olu�turulan , t�retilmi� veri tipleridir.

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

// M��teri veritaban�m�z� tutacak bir dizi olu�turuyoruz. ( structta ald���m�z m��teri bilgilerini tutmak i�in)

struct Customer customers[1000];

// Rezervsayonu i�leyen bir fonksiyon.

void makeReservation()
{
	int roomNumber , days;
	char name[50],surname[50],phone[15],email[50];
	
	printf("Otelimizdeki mevcut odalar 101,102,103,201,202,203 \n");
	printf("L�tfen bir oda numaras� se�iniz : ");
	scanf("%d",&roomNumber);
	
	printf("L�tfen ad�n�z� giriniz : ");
	scanf("%s",&name);
	
	printf("L�tfen soyad�n�z� giriniz :");
	scanf("%s",&surname);
	
	printf("L�tfen telefon numaran�z� giriniz :");
	scanf("%s",&phone);
	
	printf("L�tfen e-posta adresinizi giriniz : ");
	scanf("%s",&email);
	
	printf("Ka� g�n kalmak istersiniz");
	scanf("%d",&days);
	
	
	
	// M��teri verilerini dizimize ekliyoruz.
	
/*strcpy( ) fonksiyonu: Bir katar�, bir ba�ka katara kopyalamak i�in kullan�l�r. Katarlar ayn� boyutta olmak zorunda de�ildir.
strcpy fonksiyonu, bir karakter dizisini (string) ba�ka bir karakter dizisine kopyalamak i�in kullan�l�r. �ki parametre al�r: hedef (destination) ve kaynak (source).
	
customers[roomNumber-1].name ifadesi,
m��teri bilgilerinin depoland��� customers dizisinde, belirli bir odaya kar��l�k gelen roomNumber indeksli veri yap�s�n�n name �zelli�ine (bir karakter dizisi) eri�mek i�in kullan�l�r.
name ise, makeReservation fonksiyonunun ilk parametresidir ve kullan�c�dan al�nan m��teri ad�n� i�erir.
Dolay�s�yla strcpy(customers[roomNumber-1].name, name); ifadesi, name karakter dizisindeki m��teri ad�n�, 
customers dizisindeki belirli bir odadaki m��terinin name �zelli�ine kopyalar. B�ylece, makeReservation fonksiyonu
m��terinin ad�n� kaydeder ve rezervasyon i�lemini tamamlar.
*/
	strcpy(customers[roomNumber-1].name, name);
    strcpy(customers[roomNumber-1].surname, surname);
    strcpy(customers[roomNumber-1].phone, phone);
    strcpy(customers[roomNumber-1].email, email);
    customers[roomNumber-1].roomNumber = roomNumber;
    customers[roomNumber-1].days = days;
    customers[roomNumber-1].price = 100 * days; // 100 TL g�nl�k oda �creti.
}


// M��teri bilgilerini gor�nt�leyen fonksiyon.

void displayCustomer(int roomNumber)
{
	printf("\n Ad : %s %s \n",customers[roomNumber-1].name,customers[roomNumber-1].surname);
	printf("Telefon: %s\n", customers[roomNumber-1].phone);
    printf("E-posta: %s\n", customers[roomNumber-1].email);
    printf("Oda Numaras�: %d\n", customers[roomNumber-1].roomNumber);
    printf("Kalaca�� G�n Say�s�: %d\n", customers[roomNumber-1].days);
    printf("Toplam �cret: %.2f TL\n", customers[roomNumber-1].price);
}


// Ana fonksiyon.


int main()
{
	int choice,roomNumber;
	
	do
	{
		printf("\n Otel rezervasyon sistemi \n");
		printf("1. Rezervasyon Yap \n");
		printf("2. Rezervasyonlar� Goruntule \n");
		printf("3. Cikis \n");
		printf("Seciniz : ");
		scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			makeReservation();
				break;
		case 2:
			printf("L�tfen gor�nt�lemek istediginiz oda numaras�n� giriniz : ");
			scanf("%d",&roomNumber);
			displayCustomer(roomNumber);
			break;
		case 3:
			printf("Ge�ersiz se�im. \n");
			break;
	} 
	
	}while(choice != 3);
	return 0;
}














