#include<stdio.h>
int main(){
	int code,qty,discount;
	double price;
	char name[30];
	float total,payment;
	
	printf("Input Product Name : ");
	fflush(stdin);gets(name);
	printf("Input Product Code : ");
	scanf("%d",&code);
	printf("Input Product QTY  : ");
	scanf("%d",&qty);
	printf("Input Product Price: ");
	scanf("%lf",&price);
	
	total = qty * price ; 
	
	if(total>=1 && total<=10){
		discount = 10;
		
	}else if(total>10 && total<=20){
		discount = 20;
		
	}else if(total>20 && total <=30){
		discount = 30 ;
		
	}else{
		discount = 40;
	}
	
	payment = total - (total * discount / 100);
	printf("\n===========================\n");
	printf("Product Code : %d\n",code);
	printf("Product Name : %s\n",name);
	printf("Product QTY  : %d\n",qty);
	printf("Product Price: %.2lf$\n",price);
	printf("Discoutn = %d%%\n",discount);
	printf("Total = %.2f$\n",total);
	printf("Payment = %.2f$",payment);
	
	return 0;
}
