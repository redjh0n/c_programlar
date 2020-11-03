#include <stdio.h>

/*
Fibonacci serisi 1 1 2 3 5 8 13 ... şeklinde ilerler

*/

int main(){

int ilk_sayi=1;
int ikinci_sayi=1;
int i;

printf("%d\n%d\n",ilk_sayi,ikinci_sayi);

for (i=0; i<10; i++ ){

  int temp = ikinci_sayi;

  ikinci_sayi += ilk_sayi;
  ilk_sayi = temp;
  printf("%d\n",ikinci_sayi);
}

  return 0;
}
