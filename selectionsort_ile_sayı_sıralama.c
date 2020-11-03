#include <stdio.h>

#define MAX 50

//3 2 1
//2 3 1
//2 1 3 
//1 2 3

void selectionsort(int arr[],int size){
	
	int i,j;
	int minimumindex;
	for (i=0; i < size;i++){
		minimumindex =i;
		for (j =i; j <size;j++){
			if (arr[j] < arr[minimumindex]){
				minimumindex = j;
			}
		}
		int temp = arr[i];
		arr[i] = arr[minimumindex];
		arr[minimumindex] = temp;

	}
}


int main(){
	
	int array[MAX],size;
	int i;
	printf("Kac Elemanli: ");
	scanf("%d",&size);
	
	for (i = 0;i< size; i++){
		scanf("%d",&array[i]);
	}
	
	selectionsort(array,size);
	
	for (i=0; i <size;i++){
		printf("%d ",array[i]);
	}
	
	
	
	return 0;
}

