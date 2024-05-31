#include<stdio.h>
#include<string.h>
int main(){
	
	char name[25][50],temp[25];
	int i,n,j;
	printf("\n\n sort the string of an Array \n");
	printf("---------------------------------\n");
	printf("Input number String : ");
	scanf("%d",&n);
	printf("Input String %d\n",n);
	for(i=0;i<n;i++){
		printf("Input word : ");fflush(stdin);
		gets(name[i]);
		printf("\n");
	}
	
	for(i=1;i<=n;i++){
		for(j=0;j<=n-i;j++){
			if(strcmp(name[j],name[j+1])>0){	
				strcpy(temp,name[j]);
				strcpy(name[j],name[j+1]);
				strcpy(name[j+1],temp);
			}
		}
	}
	 
	for(i=0;i<=n;i++){
		printf("%s \n",name[i]);
	}



	
	
	
	return 0;
}
