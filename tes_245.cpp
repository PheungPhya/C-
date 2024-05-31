#include<stdio.h>
int main(){
	
	float x,y;
	float result;
	
	printf("Enter value x : ");
	scanf("%f",&x);   // 2
	printf("Enter value y : ");
	scanf("%f",&y);   // 3
	
	result = ((2*x)/(3*y)) + ((x*x)/pow(y,2));  
			// 2*2 / 3*3   +  2*2  / 3*3
			// 4/9  +  4/9
	printf("result = %.2f\n",result); 
	return 0;
}
