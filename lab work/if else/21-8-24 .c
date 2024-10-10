#include<stdio.h>
int main(){
	 int x,y,z;
	 printf("enter the value of x ");
	 scanf("%d",&x);
	 printf("enter the value of y ");
	 scanf("%d",&y);
	 printf("enter the value of z ");
	 scanf("%d",&z);
	 
	 
	 
	 
	 if(x<y&&x<z){
	 	printf("%d",x);
	 }
	 else if (y<x&&y<z){
	 	printf("%d",y);
	 }	 

	else{
		printf("%d",z);
	}
	

}
