#include <stdio.h>

int asal_mi(int sayi){
	
	int i,asal=0;
	
	if (sayi ==1){
		printf("%d sayisi asal degildir.");
	}
	
	else if(sayi <=0){
		printf("sayi sýfýr veya sýfýrdan kucuk olamaz");
		
	}
	
	else{
	
	
		for (i=2;i<sayi/2;i++){
		
			if (sayi%i==0){
				asal++;
				break;
			}
		
		}
		
		if (asal ==1){
			printf("%d sayisi asal sayi degildir.",sayi);
		}
		else{
			printf("%d sayisi asal sayidir.",sayi);
		}
	}
}

int main(){
	
	int sayi;
	printf("sayi giriniz: ");
	scanf("%d",&sayi);
	
	asal_mi(sayi);
	
	
}


