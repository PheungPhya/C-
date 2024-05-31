#include<stdio.h>
int main(){
	
	int qty;
	char name[20];
	float total;
	
	printf("Input ID             : ");gets(id);
	printf("Input Name           : ");gets(name);
	printf("Input Gender         : ");gets(gender);
	printf("Input Date of Birth  : ");gets(dob);
	printf("Input Place of Birth : ");gets(pob);
	printf("Input Married        : ");gets(marr);
	printf("Input Name Ex ti 1   : ");gets(c1);
	printf("Input Name Ex ti 2   : ");gets(c2);
	printf("Input Name Honey     : ");gets(honey);
	
	printf("\n==========================> Information <==========================\n");
	printf("ID : %s                   Name : %s                  Gender : %s\n",id,name,gender);
	printf("Date of Birth : %s        Place of Birth : %s        Married : %s\n",dob,pob,marr);
	printf("               Ex1 Name : %s               Ex2 Name : %s\n",c1,c2);
	printf("                       Honey Name : %s\n",honey);
	printf("======================> Good bye!!!!\n"); 
	return 0;
}
