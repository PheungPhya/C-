#include<stdio.h>
#include<string.h>
#define p printf
int main(){
	
	char str[40];
	int i,alp,digit,splch;
	i=alp=digit=splch=0;
	printf("Enter String : ");
	fgets(str,sizeof str,stdin);
	
	while(str[i]!='\n'){
		if((str[i]>= 'a'&& str[i]<='z') || (str[i]>='A' && str[i]<='Z')){
			alp++;
			
		}else if(str[i]>='0' && str[i]<='9'){
			digit++;
		}else{
			splch++;
		}
		i++;
	}
	
	p("Alphabet : %d\n",alp);
	p("Digit    : %d\n",digit);
	p("Special Character : %d\n",splch);
 		
	return 0;
}
