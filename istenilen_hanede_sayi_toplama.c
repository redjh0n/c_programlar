#include <stdio.h>
#include <string.h>
#define MAX 20

int main(){
	
	char sayi1[MAX],sayi2[MAX],arr1[MAX],arr2[MAX];
	int i,j; //donguler icin
	int son_hane_toplam,elde_kalan=0;
	
	/*
	son_hane_toplam dediðim deðiþken, sayýnýn 10 veya 10'dan fazla olmasý durumuna baðlý olarak deðiþir.
	elde_kalan ise adý üzere 2 sayýnýn toplamýnýn 10 veya 10'dan fazla olmasý durumunda kalan eldedir.
	
	*/
	
	int sum[MAX+1]; //sayýlarýn toplamý ve sonuç
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
	
	int x = strlen(sayi1), y = strlen(sayi2);//sayýlarýn uzunlugunu verir
	
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
		yukarýda a ve b karakter olduðu için bize ascii tablosundaki decimal deðerlerine göre toplamlarý verilecektir.
		mesela a = 5 b= 6 olsun bunlarýn asci karþýlýðý 53 ve 54'tür. Bunlarýn toplamý 107 yapar bundan ben sýfýrýn ascii
		tablosundaki deðerinin 2 katýný çýkartýrsam sayýlarýn toplamýnýn int karþýlýðýný bulurum.
		
		0 --> 48*2 = 96
		a,b 53+54 --> 107
		107-96 =11 --> 5+6
		
		*/
		
		elde_kalan = 0; //sayýnýn elde kalaný sürekli sýfýrlanmalý.
		
		if (son_hane_toplam>=10){ //sayý eðer sýfýrdan büyük ile son basamak sayýnýn 2.hanesine eþitlenir ve elde kalan sayý diðer hanedeki sayýya eklenir.
			
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
