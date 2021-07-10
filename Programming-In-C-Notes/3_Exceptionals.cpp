#include<stdio.h>
#include<conio.h>
int main(){
	int x = 5.0/2;
	printf("%d", 5.0); //will print 0, due to size conversion
	
	printf("%dkyukghkhj," +6, 5); //will print output leaving first 6 chars//ghkhj,
	
	printf("\n");
	printf("  %d" +2, 5); //will print output leaving first 2 chars //5
	
	printf("\n");
	printf("kyukghkhj," +1, 5); //will print output leaving first 1 chars //yukghkhj,
	
	printf("\n");
	printf("kyukghkhj,%d" +6, 5); //will print output leaving first 6 chars // khj,5
	
	return 0;
}
