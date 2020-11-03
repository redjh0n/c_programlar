#include <stdio.h>


int main(){

  int matris[3][3] = {{1,2,3},{4,5,6},{7,8,9}}; // burada[3][3] yazarken satir ve sutun sayisi belirtilir. Ilk suslu parantez icindeki kisimlar 0 1 2 diye siralanir.
  int i,j;
  for (i=0;i<3 ; i++){
    for (j=0;j<3; j++){
        printf("%d",matris[i][j]);

    }
    printf("\n");
  }
  return 0;
}
