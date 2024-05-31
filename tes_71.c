#include<stdio.h>
int main(){
	
	int x,d1,d2,d3;
	printf("Input x : ");
	scanf("%d",&x);
	d1 = x/100;
	d2 = (x%100)/10;
	d3 = (x%100)%10;
	x=(d3*100)+(d2*10)+d1;
	
	printf("revers value of x : %d",x);
		
	return 0;
}
