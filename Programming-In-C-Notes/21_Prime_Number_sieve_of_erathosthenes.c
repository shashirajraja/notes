#include<conio.h>
#include<stdio.h>

//Prime number in range of 1 to 100 using sieve of erathosthenes

int main() {
	
	int i = 0,j = 0 , arr[101] = {0}, start = 0;
	
	arr[0] = -1;
	arr[1] = -1;
	
	start = 2;
	
	for(i = start; i < 100; i++) {
			
		if(arr[start]==0) {
			arr[start] = 1;
		
			for(j = start+1; j < 100; j++) {
				if(j % start == 0) {
					arr[j] = -1;
				}
			}
		}
		start++;
		
	}
	
	int prime = 0;
	
	for(i=0; i<101; i++){
		if(arr[i] == 1)
			prime++;
	}
	
	printf("The number of primes in range 1 to 100 is %d\n",prime);
	
}

