#include<stdio.h>
#include<string.h>
int main(){
	char name[100][50],temp[20];
	int i,j,n;
	printf("Input N : ");scanf("%d",&n);
	printf("=====>Input<=====\n");
	for(i=0;i<n;i++)
	{
		printf("Enter our name : ",i );
		fflush(stdin);
		gets(name[i]);
	}
	printf("=====>Ouput<=====\n");
	for(i=0;i<n;i++)
	{
		printf("name[%d] :%s \n",i,name[i] );
		
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(stricmp(name[i],name[j])<0){
				strcpy(temp,name[i]);
				strcpy(name[i],name[j]);
				strcpy(name[j],temp);
			}
		}
	}
	printf("=====>Sort<=====\n");
	for(i=0;i<n;i++)
	{
		printf("name[%d] :%s \n",i,name[i] );
		
	}
	
	
	return 0;
}
