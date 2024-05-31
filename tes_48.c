#include<stdio.h>
int main(){
	
	char str[7];
	int i=0;
	fgets(str,sizeof str,stdin);
	gets(str);
	while(str[i]!='\0'){
		
		printf("%c ",str[i]);
		i++;
	}
	
	printf("%d ",i);
	return 0;
}
