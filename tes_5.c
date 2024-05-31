#include<stdio.h>
int main(){
	int code;
	char name[20];
	int qty;
	double price;
	int discount;
	float total,payment;
	printf("Input code : ");	scanf("%d",&code);
	printf("Input name : ");	fflush(stdin);	gets(name);
	printf("Input qty  : ");    scanf("%d",&qty);
	printf("Input price: ");	scanf("%lf",&price);
	printf("Input dis  : ");	scanf("%d",&discount);
	
	total=price * qty;
	payment = total - (total*discount/100);
	printf("=====================> Output <====================\n");
	printf("Code   : %d\n",code);
	printf("Name   : %s\n",name);
	printf("QTY    : %d\n",qty);
	printf("Price  : %lf\n",price);
	printf("Dicount: %d%%\n",discount);
	printf("Total  : %.2f$\n",total);
	printf("Payment: %.2f$\n",payment);
	
	return 0;
}


