#include <stdio.h>
#include <string.h>
#define MAX 20

int main(){
	
	char sayi1[MAX],sayi2[MAX],arr1[MAX],arr2[MAX];
	int i,j; //donguler icin
	int son_hane_toplam,elde_kalan=0;
	
	/*
	son_hane_toplam dedi�im de�i�ken, say�n�n 10 veya 10'dan fazla olmas� durumuna ba�l� olarak de�i�ir.
	elde_kalan ise ad� �zere 2 say�n�n toplam�n�n 10 veya 10'dan fazla olmas� durumunda kalan eldedir.
	
	*/
	
	int sum[MAX+1]; //say�lar�n toplam� ve sonu�
	char a,b;
	
	for (i =MAX-1;i>=0;i--){
		
		sayi1[i] = '0';
		sayi2[i] = '0';
		arr1[i] = '0';
		arr2[i] = '0';
	}
	for (i =MAX+1;i>=0;i--){
		sum[i] = 0;
	}
	
	printf("ilk sayi: ");
	scanf("%s",sayi1);
	printf("ikinci sayi: ");
	scanf("%s",sayi2);
	
	int x = strlen(sayi1), y = strlen(sayi2);//say�lar�n uzunlugunu verir
	
	for (i = MAX - 1, j = x - 1; i >= MAX - x; i--, j--){
		arr1[i] = sayi1[j];
		
		/*
		arr1[]= '000000000000000000000000000000'
		sayi1[]= '000000000000000000000000000000'
		
		*/
	}
	
	for (i = MAX - 1, j = y - 1; i >= MAX - y; i--, j--){
		arr2[i] = sayi2[j];
		
		/*
		arr2[]= '000000000000000000000000000000'
		sayi2[]= '000000000000000000000000000000'
		
		*/
	} 
	
	for (i = MAX-1;i>=0;i--){
		
		a = arr1[i];
		b = arr2[i];
		
		son_hane_toplam = (int) (a+b -2*'0') + elde_kalan; 
		/*
		yukar�da a ve b karakter oldu�u i�in bize ascii tablosundaki decimal de�erlerine g�re toplamlar� verilecektir.
		mesela a = 5 b= 6 olsun bunlar�n asci kar��l��� 53 ve 54't�r. Bunlar�n toplam� 107 yapar bundan ben s�f�r�n ascii
		tablosundaki de�erinin 2 kat�n� ��kart�rsam say�lar�n toplam�n�n int kar��l���n� bulurum.
		
		0 --> 48*2 = 96
		a,b 53+54 --> 107
		107-96 =11 --> 5+6
		
		*/
		
		elde_kalan = 0; //say�n�n elde kalan� s�rekli s�f�rlanmal�.
		
		if (son_hane_toplam>=10){ //say� e�er s�f�rdan b�y�k ile son basamak say�n�n 2.hanesine e�itlenir ve elde kalan say� di�er hanedeki say�ya eklenir.
			
			son_hane_toplam -= 10;
			elde_kalan = 1;
			sum[i+1] = son_hane_toplam;
		}
		else {
			sum[i+1] = son_hane_toplam;
		}
		
	}
	sum[0]= elde_kalan;
	
	for (i=0; i<MAX+1;i++){
		printf("%d",sum[i]);
	}
	
	return 0;
}
