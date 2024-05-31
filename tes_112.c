#include<stdio.h>

void swap(int a,int b){
	int t;
	t=a;
	a=b;
	b=t;
	printf("A = %d\n",a);
	printf("B = %d\n",b);
}
	

int main(){
	int a,b;
	printf("Input a : ");  scanf("%d",&a);
	printf("Input b : ");  scanf("%d",&b);
	
	swap(a,b);
	printf("A = %d\n",a);
	printf("B = %d\n",b);
		
	return 0;
}


