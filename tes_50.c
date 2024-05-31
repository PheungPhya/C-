#include<stdio.h>
int main(){
	char str[50];
	int i=0;
	printf("\n\nAccept string from keyboard\n");
	printf("-------------------------------\n");
	printf("Input string "); fgets(str,sizeof str,stdin);
	
	while(str[i]!='\0'){
		i++;
	}
	printf("it has %d",i-1);
	return 0;
}
