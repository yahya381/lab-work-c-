#include<stdio.h>
int main(){
	int number, i=2;
	printf("enter the number");
	scanf("%d",&number);
	
	
		do{
			if(i%2==0){
				printf("%d\n",i);
			}
			i+=2;
		}while(i<=number);
	}
