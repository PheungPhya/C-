#include<stdio.h>
#include<string.h>
#define p printf
#define s scanf
#define size_of 100
int main(){
	char status[size_of];	
	int alp,digit,splch,i;
	alp=digit=splch=i=0;
	
	p("Input String : ");
	fgets(status,sizeof status,stdin);
	while(status[i]!='\0'){
		
		if((status[i]>='a' && status[i] <= 'z') || (status[i] >= 'A' && status[i] <='Z')){
			alp++;
		}
		else if(status[i]>='0' && status[i]<='9'){
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














			
