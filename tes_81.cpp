#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	
	int op,i,n;
	
	printf("[1]. 2+4+6+...+n\n");
	printf("[2]. 3+5+7+...+n\n");
	again:
	printf("====================\n");
	printf("Enter one option : ");
	scanf("%d",&op);
	
	switch(op){
		case 1:{
				int sum=0;
				cout<<"Input n : ";
				cin>>n;
				for(i=2;i<=n;i+=2){
					sum = sum + i;
					cout<<i<<" + ";
				}
				cout<<"\b\b = "<<sum;
			break;
		}
		case 2:{
			int sum1=0;
			printf("Input n : ");
			scanf("%d",&n);
			for(i=3;i<=n;i+=2){
				sum1=sum1+i;
				printf("%d + ",i);
			}
			printf("\b\b = %d\n",sum1);
			break;
		}
		default:{
			printf("input wrong option\n");
			goto again;
			break;
		}
		
	}
	
	return 0;
}
