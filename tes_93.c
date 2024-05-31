#include<stdio.h>
#include<string.h>
int main(){
	
	char sta[30];
	int alp,digit,splch,i;
	alp=digit=splch=i=0;
	
	printf("Enter String  :  ");
	fgets(sta,sizeof sta,stdin);  
										
	while(sta[i]!='\0'){	
		if((sta[i]>='a' && sta[i]<='z') || (sta[i]>='A' && sta[i]<='Z')){
			alp++; 
		}else if((sta[i]>='0' && sta[i]<='9')){
			digit++; 
		}else{
			splch++;  
		}
		i++;		
	}
	
	printf("apl = %d\n",alp);
	printf("digit = %d\n",digit);
	printf("splch = %d\n",splch-1);
	
	
	
	return 0;
}
