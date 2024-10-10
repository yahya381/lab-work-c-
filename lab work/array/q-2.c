/*#include<stdio.h>
int main(){
	int size;
	int num=0;
	
	printf("enter array size : ");
	scanf("%d",&size);
	
	int y[5];
    printf("Enter array elements : \n"); 
    int i;
for(i=0;i<=4;i++){
	printf("enter %dth element : ",i);
	scanf("%d",&y[i]);
}
printf("the array elements are : \n");
for(i=0;i<=4;i++){
	printf("%dth element is : %d\n",i,y[i]);
	scanf("%d", &array[i]);
	num+=array[i];
	
}
float average =(float)num /size;
printf("average of an array : %d \n",size);
}
*/
#include <stdio.h>

int main() {
    int size, i;
    float sum = 0, average;

    // Input: array size
    printf("Enter array size: ");
    scanf("%d", &size);

    // Validate array size
    if (size <= 0) {
        printf("Array size must be greater than zero.\n");
        return 1;
    }

    int array[size];

    // Input: array elements
    for (i = 0; i < size; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &array[i]);
        sum += array[i];
    }

    // Calculate the average
    average = sum / size;

    // Output the average
    printf("Average of the Array: %.1f\n", average);

