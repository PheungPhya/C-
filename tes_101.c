#include<stdio.h>
int a ,b ;
void sum(int x,int y){
	printf("x + y = %d\n",x+y);
	printf("x - y = %d\n",x-y);
}

int main(){
	int x,y;
	
//	printf("Input x : ");  scanf("%d",&x);
//	printf("Input y : ");  scanf("%d",&y);
	
	sum(30,20);

	return 0;
}
