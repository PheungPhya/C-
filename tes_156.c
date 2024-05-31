#include<stdio.h>
#include<stdbool.h>
int main(){
	int a[30];
	int i,j,n,del;
	int f=0;
	printf("Enter n : ");
	scanf("%d",&n);
	
	printf("===========> Input <==========\n");
	for(i=0;i<n;i++){
		printf("Enter value a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	
	printf("===========> Output <==========\n");
	for(i=0;i<n;i++){  
		printf("a[%d] = %d\n",i,a[i]);
	}
	
	printf("\nWhich number do you want to delete from list : ");
	scanf("%d",&del);
	for(i=0;i<n;i++){
		if(del==a[i]){
			for(j=i;j<n;j++){
				a[j]=a[j+1];
			}
			n--;
			f=1;
		}
	} 
	
	printf("===========> After Delete <==========\n");
	for(i=0;i<n;i++){  
		printf("a[%d] = %d\n",i,a[i]);
	}
	
	if(f==1){
		printf("Delete Success..!!");
	}else{
		printf("Delete Fail..!");
	}
	return 0;
}
