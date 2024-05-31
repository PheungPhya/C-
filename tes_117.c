#include<stdio.h>
#include<string.h>
#include<windows.h>
int main(){
	
	char str[30]="vn yb boh";
	int l=0,i;
	
	l=strlen(str);
	printf("Length of string : %d\n",l);

	for(i=l;i>=0;i--){
		Sleep(700);
		printf("%c ",str[i]);
	}
		
	return 0;
}
