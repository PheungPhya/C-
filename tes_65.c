#include<stdio.h>
int main(){
	int arr[50];
	int n,i,sum=0;
	int count1=0,count2=0;
	printf("Input number of array : ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Enter value a[%d] . = ",i);
		scanf("%d",&arr[i]);
		sum=sum+arr[i];
	}
	for(i=0;i<n;i++){
		printf("a[%d] = %d\n",i,arr[i]);
	}
	printf("Sum = %d",sum);
	
	for(i=0;i<n;i++){
		if(arr[i]%2==0){ 
			printf("Even number = %d\n",arr[i]);
			count1++;
		}else{
			printf("Odd number = %d\n",arr[i]);
			count2++;
		}
	}
	printf("\n\nEven  = %d\n",count1);
	printf("odd  = %d\n",count2);
	
	return 0;
	
}
