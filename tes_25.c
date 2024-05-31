#include<stdio.h>
int main(){
	int code , qty ,discount;
	char name[30];
	float price;
	float total , payment;
	printf("Enter Code : "); scanf("%d",&code);
	printf("Enter Name : "); fflush(stdin);gets(name);
	printf("Enter QTY  : "); scanf("%d",&qty);
	printf("Enter Price: "); scanf("%f",&price);
	total = qty * price;
	if(total>=1 && total<=10){
		discount = 10;
	}else if(total>10 && total<=20){
		discount = 20;
	}else if(total>20 && total<=30){
		discount = 30;
	}else if(total>30 && total<=40){
		discount = 40;
	}else if(total>50 && total<=60){
		discount = 50;
	}else{
		discount = 60;
	}
	payment = total - (total * discount / 100);
	printf("=======================\n");
	printf("Code : %d\n",code);
	printf("Name : %s\n",name);
	printf("QTY  : %d\n",qty);
	printf("Price: %.2f$\n",price);
	printf("Total: %.2f$\n",total);
	printf("Discount : %d%%\n",discount);
	printf("Payment  : %.2f$\n",payment);
	return 0;
}
