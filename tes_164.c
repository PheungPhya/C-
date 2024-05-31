#include<stdio.h>
int main(){
		
	int code[20],qty[20];
	char name[20][20];
	float price[20],total[20];
	float pay[20];
	
	int i,j,n,op;
	
	void Input(){
		printf("Enter Product Code : ");scanf("%d",&code[i]);
		printf("Enter Product Name : ");fflush(stdin);gets(name[i]);
		printf("Enter Product Price : ");scanf("%f",&price[i]);
		printf("Enter Product Quantity :");scanf("%d",&qty[i]);
	}
	float Total(){
		total[i]=price[i] * qty[i];
		return total[i];
	}
	float Dis(){
		int ds=0;
		if(Total()>=1 && Total()<=10){
			ds=10;
			
		}else if(Total()>10 && Total()<=20){
			ds=20;
		
		}else if(Total()>20 && Total()<=30){
			ds=30;
			
		}else if(Total()>30 && Total()<=40){
			ds=40;
			
		}else {
			ds=50;
		}	
		return ds;
		
	}
	float Pay(){
		return Total()-(Total()*Dis()/100);
	}
	void Output(){
		printf("%-7d %-10s %-10.2f$ %-10d %-10.2f$ %-10d %-10.2f$\n",code[i],name[i],price[i],qty[i],Total(),Dis(),Pay);
	}
		
		
		
		
			
	return 0;
}
