#include <stdio.h>

/*

1 2 3 4 5
6 7 8 9 10
11 12 13 14 15


*/


int main(){

    int matris[3][5];
    int i,j;

    for (i=0; i<3; i++){

      for (j=0; j<5; j++){

        scanf("%d",&matris[i][j]);

      }

    }
    for (i=0; i<3; i++){

      for (j=0; j<5; j++){

        printf("%d",matris[i][j]);
      }
      printf("\n");
    }

  return 0;
}
