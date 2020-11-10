#include <stdio.h>
#include <math.h>
#define pi 3

/* 

r: yaricap

daire cevresi: 2*pi*r

daire alanı: pi*r**2

*/


int main() {
	
	
	int r,alan,cevre;
	
	
	printf("yaricapi giriniz: ");
	scanf("%d",&r);
	
	alan = pi*(pow(r,2));
	cevre = 2*pi*r;
	
	printf("Cevre: %d\nAlan: %d",cevre,alan);
	
	
	
	return 0;
}