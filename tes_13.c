#include<stdio.h>
int main(){
	char id[20],name[20],sex[20],dob[20],pob[20];
	char mar[20],c1[20],c2[20],honey[20];
	
	printf("Input id   : ");gets(id);
	printf("Input Name : ");gets(name);
	printf("Input sex  : ");gets(sex);
	printf("Input dob  : ");gets(dob);
	printf("Input pob  : ");gets(pob);
	printf("Input mar  : ");gets(mar);
	printf("Input c1   : ");gets(c1);
	printf("Input c2   : ");gets(c2);
	printf("Input honey:");gets(honey);
	
	printf("=======================Information================\n");
	printf("ID : %s                  Name : %s                  Sex : %s\n",id,name,sex);
	printf("Date of birth : %s       Place Of Birth : %s        Married : %s\n",dob,pob,mar);
	
	
	return 0;
}
