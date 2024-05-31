#include<stdio.h>

int main(){
	int code,qty,dis;
	char name[20];
	double price,total,pay;
	
	printf("Enter Code : ");
	scanf("%d",&code);
	printf("Enter Name : ");
	scanf("%s",&name);
	printf("Enter Quantity  : ");
	scanf("%d",&qty);
	printf("Enter Price : ");
	scanf("%lf",&price);
	printf("Enter Discount : ");
	scanf("%d",&dis);
	
	total = qty * price;
	pay = total - (total * dis / 100);
	
//	printf("Code = %d\n",code);
//	printf("Name = %s\n",name);
//	printf("Quantity = %d\n",qty);
//	printf("Price    = %.2lf $\n",price);
//	printf("Discout  = %d %%\n",dis);
//	printf("Total    = %.2lf $\n",total);
//	printf("Payment  = %.2lf $\n",pay);
	
	printf("%d\t\t %s\t\t %d\t\t %2.lf$\t\t %d\t\t %2.lf$\t\t %2.lf$\t\t\n",code,name,qty,price,dis,total,pay);
	
	return 0;
}
