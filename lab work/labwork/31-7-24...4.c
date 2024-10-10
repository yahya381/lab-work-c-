#include <stdio.h>
int main(){
    float  simple_intrest ,amount ,rate, month;
	printf("enter the amount  : ");
	scanf ("%f", & amount);
	printf("enter the rate : ");
	scanf ("%f", & rate);
	printf("enter the month : ");
	scanf ("%f", & month);
    simple_intrest = amount*rate*month/100;
    printf(" simple_intrest  is : &f",  simple_intrest);

}

