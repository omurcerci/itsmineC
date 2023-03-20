/*
	Bu proje Alperhan Tuðrul Uzgor'ündür. 
	Alýþtýrma amaçlý kullanýlmýþ olup programýn mantýðýný oðrenildiði takdirde omurcerci tarafýndan tekrar yazýlýp/revize edilmiþtir.
*/

/*

	Bilgi yarýþmasý.
	
	Baþlangýç olarak kullanýcýya/yarýþmacýya hoþgeldin ifadesi sunan ve yarýþmayý tanýtan bir program.
	
	Ardýndan kullanýcýya seçim sunulacak ;
	1- Giriþ yap
	2- Kayýt ol
	
	Yapýlan seçime gore  yarýþmacýyý yarýþma programýna kayýt edecek (Giriþ bilgilerini bir array içersinde tutacaðýz.)
	Yarýþmacýyý kayýt edeceðiz ayný þekilde.
	
	Bilgi yarýþmasý klasik soru cevap þeklinde olup yarýþmacý 0 puan ile yarýþmaya baþlayacak ve sorulan sorulara doðru cevap verdiði takdirde +10 puan hanesine yazýlacaktýr.
	
	Programýmýz genel hatlarý ile bu kadar.
*/



#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void hosgeldinizfonk()  // Deger dondürmeyen fonksiyonel islemler icin kullanilir.
{
	printf("Bilgi yarismasina hosgeldiniz! \n Lutfen kurallari okuyunuz ... \n \n");
	printf(" 1- Yarismamiz puan sistemlidir... \n");
	printf(" 2-Kullanici adinizi dogru bir sekilde giriniz... \n");
	printf(" 3-Eger kayitli degilseniz üye olunuz...\n");
}


int secimfonk()	// Seçim yapma fonksiyonu
{
	int secim;
	printf("Lutfen asagidaki seceneklerden birini seciniz... \n");
	printf("1-Giris Yap\n");
	printf("2-Kayit Ol \n");
	scanf("%d",&secim);
	return secim;
}

int girisYapfonk(char isim[20],char sifre[20]) // giris yapmak icin isim ve sifre fonksiyonu
{
	char alinanisim[20];
	char alinansifre[20];
	
	int kontrol =0;
	while(kontrol==0)
	{
		printf("Lutfen adinizi giriniz : \n");
		scanf("%s",&alinanisim);
		printf("Lutfen sifrenizi giriniz : \n");
		scanf("%s",&alinansifre);
		
		if(strcmp(isim,alinanisim)==0 && strcmp(sifre,alinansifre)==0)
		{
			printf("Sisteme hosgeldiniz \n\n");
			kontrol = 1;
		}
		else
		{
			printf("Hatali giris. \n\n");
		}
	}
}

int kayitOlfonk()
{
	char isim[20];
	char sifre[20];
	printf("Lutfen bir isim giriniz : \n");
	scanf("%s",&isim);
	printf("Lutfen bir sifre giriniz : \n");
	scanf("%s",&sifre);
	printf("Kaydiniz basarili bir sekilde yapilmistir. \n");
	printf("Giris ekranina yonlendiriliyorsunuz...\n");
	
	girisYapfonk(isim,sifre);
}

int bilgiYarismasi()
{
	char cevap[1];
	int puan=0;
	printf("Yarisma basladi... \n");
	printf("Puaniniz : %d",puan);
	
	if(puan==0)
	{
	printf("{Soru-1}->Asagidakilerden hangisi Turkiye Cumhuriyetinin baskentidir?\n");
    printf("a-Istanbul  b-Ankara  c-Bursa  d-Edirne  e-Izmir\n");
    scanf("%s",&cevap);
    
    if(strcmp("cevap,b")==0)
    {
    	printf("Dogru cevap... \n");
    	puan += 10;
    	printf("Puaniniz : %d",puan);
	}
	else
	{
		printf("Yanlis cevap...\n");
		printf("Puaniniz : %d \n",puan);
	}
	}
	if(puan ==10)
	{
	printf("{Soru-2}->Asagidakilerden hangisi Rusyanin baskentidir?\n");
    printf("a-Moskova  b-Berlin  c-Hakkari  d-Zenit  e-Varsova\n");
    scanf("%s",&cevap);
    if(strcmp(cevap,"a")==0)
    {

        printf("Dogru Cevap...\n");
        puan+=10;
        printf("Puaniniz : %d \n",puan);
    }
    else
    {
        printf("Yanlis Cevap...\n");
        printf("Puaniniz : %d \n",puan);
    }
    }

    return puan;
}

int main()
{
    char isim[20]="alperhan";
    char sifre[20]="1234";

    hosgeldinizfonk();
    int secim=secimfonk();

        if(secim==1)
    {
        girisYapfonk(isim,sifre);

    }
    else if(secim==2)
    {
        kayitOlfonk();

    }

    bilgiYarismasi();





    return 0;
}

