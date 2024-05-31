#include<stdio.h>
#include<stdlib.h>
struct Product{
	int code,qty;
	char name[20];
	float price,total;	
}*pro;

void input(int n){
	int i;
	pro=(struct Product*)malloc(n*sizeof(struct Product));
	for(i=0;i<n;i++){
		printf("Enter Procut Code : ");
		scanf("%d",&(pro+i)->code); 
		printf("Enter Product Name :  ");
		fflush(stdin);gets((pro+i)->name);
		printf("Enter Product Qty  : ");
		scanf("%d",&(pro+i)->qty);
		printf("Enter Prodcut Price : ");
		scanf("%f",&(pro+i)->price);
		(pro+i)->total=(pro+i)->qty * (pro+i)->price;
		printf("\n");
	}
}
void head(){
	printf("\n%-7s %-10s %-7s %-10s %-10s\n","CODE","NAME","QUANTITY","PRICE","TOTAL");
}
void output(int n){
	int i;
	for(i=0;i<n;i++){
		printf("%-7d %-10s %-7d $%-10.2f $%-10.2f\n",(pro+i)->code,(pro+i)->name,(pro+i)->qty,(pro+i)->price,(pro+i)->total);
	}
	printf("\n");
		
}
void search(int n){
	int i,search;
	printf("which code do you want to search : ");
	scanf("%d",&search);
	for(i=0;i<n;i++){
		if(search==(pro+i)->code){
			head();
			printf("%-7d %-10s %-7d $%-10.2f $%-10.2f\n",(pro+i)->code,(pro+i)->name,(pro+i)->qty,(pro+i)->price,(pro+i)->total);
		}
	}
}
void update(int n){
	int update,i;
	printf("Which code do you want to update : ");
	scanf("%d",&update);
	for(i=0;i<n;i++){
		if(update==(pro+i)->code){
			printf("Enter Procut Code : ");
			scanf("%d",&(pro+i)->code); 
			printf("Enter Product Name :  ");
			fflush(stdin);gets((pro+i)->name);
			printf("Enter Product Qty  : ");
			scanf("%d",&(pro+i)->qty);
			printf("Enter Prodcut Price : ");
			scanf("%f",&(pro+i)->price);
			(pro+i)->total=(pro+i)->qty * (pro+i)->price;
		}
	}
}
void sort(int n){
	struct Product temp;
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if((pro+j)->code > (pro+j+1)->code){
				temp = *(pro+j);
				*(pro+j)=*(pro+j+1);
				*(pro+j+1)=temp;
			}
		}
	}
}
void del(int *n){
	int Del,i,j;
	printf("which code do you want to delete : ");
	scanf("%d",&Del);
	
	for(i=0;i<*n;i++){
		if(Del==(pro+i)->code){
			for(j=i;j<*n;j++){
				*(pro+j)=*(pro+j+1);
			}
			*n=*n-1;
		}
	}
}
insert(int *n){
	int i,j,isert;
	printf("Where do you want to insert : ");
	scanf("%d",&isert);
	for(i=0;i<*n;i++){
		if(isert==(pro+i)->code){
			for(j=*n;j>i;j--){
				*(pro+j)=*(pro+j-1);/// pro[j]=pro[j-1]
			}
			printf("Enter Procut Code : ");
			scanf("%d",&(pro+i)->code); 
			printf("Enter Product Name :  ");
			fflush(stdin);gets((pro+i)->name);
			printf("Enter Product Qty  : ");
			scanf("%d",&(pro+i)->qty);
			printf("Enter Prodcut Price : ");
			scanf("%f",&(pro+i)->price);
			(pro+i)->total=(pro+i)->qty * (pro+i)->price;
			*n=*n+1;
			i++;
		}
	}
}

void ADD(int *n){
	int add,i,j;
	printf("How many product do you want to add more : ");
	scanf("%d",&add);
	
	for(i=*n;i<*n+add;i++){
		printf("Enter Procut Code : ");
		scanf("%d",&(pro+i)->code); 
		printf("Enter Product Name :  ");
		fflush(stdin);gets((pro+i)->name);
		printf("Enter Product Qty  : ");
		scanf("%d",&(pro+i)->qty);
		printf("Enter Prodcut Price : ");
		scanf("%f",&(pro+i)->price);
		(pro+i)->total=(pro+i)->qty * (pro+i)->price;
	}
	*n=*n+add;
}






int main(){
	
	int n;
	int option;
	do{
		printf("[1].Input\n");
		printf("[2].Output\n");
		printf("[3].Search\n");
		printf("[4].Update\n");
		printf("[5].Sort\n");
		printf("[6].Delete\n");
		printf("[7].Insert\n");
		printf("[8].Add More\n");
		printf("==============\n");
		printf("Enter one option : ");
		scanf("%d",&option);
		
		switch(option){
			case 1:{
				printf("How many do you want to input : ");
				scanf("%d",&n);
				input(n);
				break;
			}
			case 2:{
				head();
				output(n);
				break;
			}
			case 3:{
				search(n);
				break;
			}
			case 4:{
				update(n);
				break;
			}
			case 5:{
				sort(n);
				head();
				output(n);
				break;
			}
			case 6:{
				del(&n);
				break;
			}
			case 7:{
				insert(&n);
				break;
			}
			case 8:{
				ADD(&n);
				break;
			}
		}
	}while(option!=0);	
	return 0;
}
