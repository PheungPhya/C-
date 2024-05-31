#include<stdio.h>
#include<windows.h>
int main(){
	
	char str[20];
	int l=0;
	
	printf("Input String : ");
	fgets(str,sizeof str,stdin);
	while(str[l]!='\0'){
		Sleep(300);
		printf("%c ",str[l]);
		
		l++;
	}
	
	return 0;
}
