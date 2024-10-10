#include<stdio.h>
int main(){
	int population;
	printf("enter population");
	scanf("%d",&population);
	
	char category=population>10000?'a':population>8000?'b':population>5000?'c':'d';
	printf("max population is %c",category);

}
