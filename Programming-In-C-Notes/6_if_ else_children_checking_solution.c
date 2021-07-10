#include<stdio.h>
#include<conio.h>
int main(){
	
	char is_marriage;
	char having_children;
	int children;
	
	printf("Enter y if you are marriaged and n if unmarriaged\n");
	scanf("%c",&is_marriage);
	
	if(is_marriage=='y'){
		
		printf("Enter y for yes if you have any child and n for no if not\n");
		fflush(stdin);
		scanf("%c",&having_children);
	
	    if(having_children=='y'){
			printf("How many children do you have\n");
			scanf("%d",&children);
			printf("you have %d children\n",children);	     	
		 }
		 else if(having_children=='n'){
		 	printf("No children");
		 }
		 else{
		 	printf("you have entered wrong input,enter y or n only\n");
		 }
	
	}
	else if(is_marriage=='n'){
		printf("its okk");
	}
	else if(is_marriage!='y'&& is_marriage!='n'){
	
		printf("you have entered wrong input");
	}
}
