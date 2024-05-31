#include<stdio.h>
#include<math.h>
int main(){
	
	int x;
	int result;
	printf("Enter value x : ");
	scanf("%d",&x);
	
	result = x + (x*x) + pow(x,3) + pow(x,4);  // (x*x*x) = x^3 , pow(x,3)=x^3
		    // 2+4+8+16=30
	printf("x + (x*x) + pow(x,3) + pow(x,4) = %d\n",result);
	return 0;
}



