#include<stdio.h>
#include<conio.h>

//2D array with pointers


int main() {
		
	int arr[][3] = {1,2,3,4,5,6};

	// we access the ith row and jth column of an array using pointers as:
	// arr[i][j] Equivalent to => *(*(ptr+i)+j)

	  int i, j;
	  for (i = 0; i < 2; i++)
	  {
	    printf("Address of %dth array = %p %p\n", i, arr[i], *(arr + i));
	      
	    for (j = 0; j < 3; j++)
	      printf("%d %d ", arr[i][j], *(*(arr + i) + j));
	      
	    printf("\n");
	  }

}
