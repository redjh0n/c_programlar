#include <stdio.h>


int main(){


  int islem;
  int bakiye =1000;
  int tutar;

  printf("Islemler\n1:para Cekme\n2:para yatirma\n3:havale yapma\n4:Bakiye sorgulama\n5:Kart Iade\n\n\n");

  printf("islemi Seciniz:");
  scanf("%d",&islem);

  switch(islem){

    case 1:
      printf("Bakiyeniz: %d\n",bakiye);
      printf("Cekilecek Miktar: ");
      scanf("%d",&tutar);
      if (tutar > bakiye){
        printf("Yetersiz bakiye.");
      }
      else {
        bakiye -= tutar;
        printf("Bakiyeniz: %d\n",bakiye);
      }
      break;
    case 2:
      printf("Bakiyeniz: %d\n",bakiye);
      printf("Yatirilacak Miktar: ");
      scanf("%d",&tutar);
      bakiye += tutar;
      printf("Bakiyeniz: %d\n",bakiye);
      break;

    case 3:
      printf("Bakiyeniz: %d\n",bakiye);
      printf("Havale yapilacak Miktar: ");
      scanf("%d",&tutar);
      if (tutar > bakiye){
        printf("Yetersiz bakiye.\n");
      }
      else {
        bakiye -= tutar;
        printf("Bakiyeniz: %d",bakiye);
      }
      break;

    case 4:
      printf("Bakiyeniz: %d",bakiye);
      break;
    case 5:
      printf("Kart iade ediliyor...");
      break;
    default:
      printf("Herhangi bir islem secilmedi.");
      break;
  }

  return 0;
}
