#include <stdio.h>


int main(){

  int faktoriyel,sayi,deger;

  printf("Sayiyi Giriniz:");
  scanf("%d",&sayi);

  faktoriyel = 1;
  deger = 1;

  while (sayi >= deger){

    faktoriyel *= deger;
    deger ++;

  }
  printf("%d faktoriyeli: %d",sayi,faktoriyel);

  return 0;
}
