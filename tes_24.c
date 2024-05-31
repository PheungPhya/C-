#include<stdio.h>
#include<math.h>
int main(){
	float x,y,total;
	printf("Input x : ");scanf("%f",&x);
	printf("Input y : ");scanf("%f",&y);
	
	total = ((2*x) / (3*y)) + ((x*x) / pow(y,2));
	
	printf("Total = %.2f",total);
	
	return 0; 
}
