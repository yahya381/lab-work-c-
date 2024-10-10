#include <stdio.h>
int main(){
	float area, radius;
	printf("enter the radius:");
	scanf("%f",& radius);
	area = 3.14*radius*radius;
	printf("area is : %f" ,area);
	
	
	float length;
	printf("enter the length : ");
	scanf ("%f",& length);
	area= length*length;
	printf("the area is : %f",area);
	
	
	float base,height;
	printf("enter the base : ");
	scanf ("%f,& base");
	printf("enter the height :");
	scanf ("%f",& height);
	area= 0.5*base*height;
	printf("the area is :%f",area);
	
	
	float amount ,rate, month;
	printf("enter the amount  : ");
	scanf ("%f", & amount);
	printf("enter the rate : ");
	scanf ("%f", & rate);
	printf("enter the month : ");
	scanf ("%f", & month);
	area=100/ amount*rate*month;
	
	
	float radius;
	printf("enter the radius : ");
	scanf ("%f",&radius);
	area=2*3.14*radius*radius;
	}
