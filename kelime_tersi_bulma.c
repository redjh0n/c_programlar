#include <stdio.h>
#include <string.h>

void ters_cevir(char dizi[]){

  int i,uzunluk,gecici;

  uzunluk = strlen(dizi);

  for (i=0; i < uzunluk/2; i++){
    gecici = dizi[i];
    dizi[i] = dizi[uzunluk-1-i];
    dizi[uzunluk-1-i] = gecici;

  }
}

int main(){

  char kelime[10];
  printf("Kelime Giriniz: ");
  scanf("%s",kelime);
  ters_cevir(kelime);
  printf("Kelimenin tersi: %s\n",kelime);


    return 0;
}
