#include <stdio.h>
#include <string.h>

int main() {
	
	
	int i,n,toplam=0;
	
	
	printf("n degerini giriniz: ");
	scanf("%d",&n);
	
	
	for (i=1; i<=n; i++){
		
		toplam += i; 	
	}
	
	printf("%d",toplam);
	
	return 0;
}