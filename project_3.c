#include<stdio.h>
#include<stdlib.h>
struct Product{
	int code,qty;
	char name[20];
	float price;
}*pd,a[20],op;

int main(){
	pd = (struct Product *)malloc(sizeof(struct Product));
	printf("Enter code : ");
	scanf("%d",&pd->code);
	
	printf("Code = %d",pd->code);
	
	return 0;
}
