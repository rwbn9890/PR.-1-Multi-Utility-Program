#include<stdio.h>

int main(){
	
	int a, b, c;
	
	printf("A: ");
	scanf("%d", &a);
	
	printf("B: ");
	scanf("%d", &b);
			
	printf("C: ");
	scanf("%d", &c);
	
	
	if(a > b){
		if( a > c){
			printf("A is greater");
		}
		else {
			printf("C is greater");
		}
		
	}
	else if(b > a){
			if( b > c){
				printf("B is greater");
			}
			else {
				printf("C is greater");
			}
	}

}
