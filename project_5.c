#include<stdio.h>
#include<string.h>
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
		printf("\n");
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
		printf("%-7d %-10s $%-10.2f %-10d $%-10.2f %%%-10.2f $%-10.2f\n",code[i],name[i],price[i],qty[i],Total(),Dis(),Pay());
	}
	void head(){
		printf("\n%-7s %-10s  %-10s %-10s  %-10s  %-10s  %-10s\n","CODE","NAME","PRICE","QUANTITY","TOTAL","DISCOUNT","PAYMENT");
	}
	
	do{
		printf("[1]. Input Product\n");
		printf("[2]. Ouput Product\n");
		printf("[3]. Search Product\n");
		printf("[4]. Update Product\n");
		printf("[5]. Delete Product\n");
		printf("[6]. Insert Product\n");
		printf("[7]. Sort   Product\n");
		printf("[8]. Add   product\n");
		printf("[9]. And [0]. For Exit\n");
		printf("[10]. Clear Screen\n");
		printf("====================\n");
		printf("Choose one option : ");
		scanf("%d",&op);
		
		switch(op){
			case 1:{
				printf("How many product do you want to input : ");
				scanf("%d",&n);
				for(i=0;i<n;i++){
					printf("=========> Product %d\n",i+1);
					Input();
				}
				break;
			}
			case 2:{
				head();
				for(i=0;i<n;i++){
					Output();
				}
				break;
			}
			case 3:{
				int search;
				printf("Enter id product to search : ");
				scanf("%d",&search);
				for(i=0;i<n;i++){
					if(search==code[i]){
						head();
						Output();
					}
				}
				break;
			}
			case 4:{
				int update;
				printf("Enter code to update : ");
				scanf("%d",&update);
				for(i=0;i<n;i++){
					if(update==code[i]){
						Input();
					}
				}
				break;
			}
			case 5:{
				int Delete,f=0;
				printf("Enter code to delete : ");
				scanf("%d",&Delete);
				for(i=0;i<n;i++){
					if(Delete==code[i]){
						for(j=i;j<n;j++){
							code[j]=code[j+1];
							strcpy(name[j],name[j+1]);
							price[j]=price[j+1];
							qty[j]=qty[j+1];							
						}
						f=1;
						n--;
					}
				}
				if(f==1){
					printf("Delete success..!!\n");
				}else{
					printf("Deleta False...!!\n");
				}
				break;
			}
			case 6:{
				int insert;
				printf("Enter code where you want to insert : ");
				scanf("%d",&insert);
				for(i=0;i<n;i++){
					if(insert==code[i]){
						for(j=n;j>i;j--){
							code[j]=code[j-1];
							strcpy(name[j],name[j-1]);
							price[j]=price[j-1];
							qty[j]=qty[j-1];
						}
						n++;
						Input();
						break;
					}
				}
				break;
			}
			case 7:{
				int temp_code;
				char temp_name[20];
				int temp_qty;
				float temp_price;
				for(i=0;i<n;i++){
					for(j=i+1;j<n;j++){
						if(code[i] > code[j]){							
							temp_code=code[i];
							code[i]=code[j];
							code[j]=temp_code;
							
							strcpy(temp_name,name[i]);
							strcpy(name[i],name[j]);
							strcpy(name[j],temp_name);
							
							temp_price=price[i];
							price[i]=price[j];
							price[j]=temp_price;
							
							temp_qty=qty[i];
							qty[i]=qty[j];
							qty[j]=temp_qty;	
						}
					}
				}
				head();
				for(i=0;i<n;i++){
					Output();
				}
				break;
			}
			case 8:{
				int add;
				printf("Enter number of more product : ");
				scanf("%d",&add);
				for(i=n;i<n+add;i++){
					Input();
				}
				n=n+add;
				break;
			}
			case 9:{
				printf("\n\nGood bye..!!\n");
				exit(1);  // #include<stdlib.h>
				break;
			}
			case 10:{
				system("cls");	// #include<stdlib.h>
				break;    
			}
			default:{
				printf("Please Try Again.!\n");
				printf("No option number %d\n",op);
				break;
			}
		} 
		printf("\n");
	}while(op!=0);
			
	return 0;
}
