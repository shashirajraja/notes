#include<conio.h>
#include<stdio.h>

//Prime number find
int isPrime(int n);

int main() {
	int n = 100;
	
	int res = isPrime(n);
	
	if(res != 0)
		printf("%d is prime number\n",n);
	else
		printf("%d is not a prime number\n", n);
	
	
	//Count all the prime numbers in the range of a to b
	int a,b,i,count = 0 ;
	
	a  = 1;
	n = 100;
	
	for(i=a; i<=n ;i++) {  //Time complexity = O(n*n)
		int res = isPrime(i);
		
		if(res == 1)
			count++;
	}
	
	printf("THe number of prime number between 1 to 100 is %d\n", count);
}


int isPrime(int n) { //Time complexity O(n)
	int i = 0;
	
	for(i = 1 ; i <= n; i++) {
		
		if(n % i == 0 && i != 1 && i != n)
			return 0;	
		
	}
	
	
	return 1;
}
