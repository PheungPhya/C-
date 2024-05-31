#include<stdio.h>
int main(){
	int code,qty,discount;
	char name[30];
	double price;
	float total,payment;
	printf("Enter Product Code : ");
	scanf("%d",&code);
	printf("Enter Product Name : ");
	fflush(stdin);gets(name);
	printf("Enter Product Price: ");
	scanf("%lf",&price);
	printf("Enter Product Quantity : ");
	scanf("%d",&qty);
	
	total = qty * price;
	
	if(total >=1 && total <=10){
		discount = 10;
	}else if(total > 10 && total <=20){
		discount = 20;
	}else if(total > 20 && total <=30){
		discount = 30;
	}else{ 
		discount = 40;
	}
	
	payment = total - (total * discount / 100);
	
	printf("\n==========================\n");
	printf("Product Code     : %d\n",code);
	printf("Product Name     : %s\n",name);
	printf("Product Quantity : %d\n",qty);
	printf("Product  Price   : %.2lf$\n",price);
	printf("Discout          : %d%%\n",discount);
	printf("Total            : %.2f$\n",total);
	printf("Payment          : %.2f$\n",payment);
	
	return 0;
}
