#include <stdio.h>

int main(){
	
	int i,bolunecek_sayi;
	int sayi;
	int binler,yuzler,onlar,birler;
	
	printf("Enter a four digit number: ");
	scanf("%d",&sayi);
	
	if (sayi>999 && sayi<10000){
			
			binler = sayi/1000;
			yuzler = (sayi/100)-(binler*10);
			onlar = (sayi/10)-((sayi/100)*10);
			birler = sayi%10;
			
			printf("Sum of steps: %d",binler+yuzler+onlar+birler);
			
		}
	
	else {
		printf("The number must be four digits.");
	}
	
	
	return 0;
}
