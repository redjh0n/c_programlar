#include <stdio.h>
#include <math.h>

/*
ax^2 + bx + c

diskriminant = b^2-4ac

x1 = (-b-kök(diskriminant))/2*a
x2 = (-b+kök(diskriminant))/2*a

*/
int main() {


  int a,b,c;
  float diskriminant;
  float x1,x2;

  printf("Denklemin a'değerini giriniz: ");
  scanf("%d",&a );

  printf("Denklemin b'değerini giriniz: ");
  scanf("%d",&b );

  printf("Denklemin c'değerini giriniz: ");
  scanf("%d",&c );

  diskriminant = b*b -4*a*c;
  x1 = (-b + (sqrt(diskriminant)) )/2*a;
  x2 = (-b - (sqrt(diskriminant)) )/2*a;

  printf("x1: %.0f\nx2: %.0f",x1,x2 );

return 0;
}
