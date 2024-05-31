#include<stdio.h>
int main(){
	int code,qty,dis;
	char name[20];
	float price,total,payment,paydis;
	printf("Input code  : ");scanf("%d",&code);
	printf("Input name  : ");fflush(stdin);gets(name);
	printf("Input Qty   : ");scanf("%d",&qty);
	printf("Input price : ");scanf("%f",&price);
	printf("Input dis   : ");scanf("%d",&dis);
	
	total=qty*price;
	paydis=total*dis/100;
	payment=total-paydis;
	printf("Total = %.2f$\n",total);
	printf("paydis = %.2f$\n",paydis);
	printf("Payment = %.2f$\n",payment);
		
	
	return 0;
}
