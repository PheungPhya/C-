#include<iostream>
#include<stdio.h>
#include<string.h>
#include<iomanip>
using namespace std;
class Employee{
	private:
		int id;
		char name[20],position[20],sex[20];
		float salary;
	public:
		Employee(){
			id=0;
			strcpy(name,"null");
			strcpy(position,"null");
			strcpy(sex,"null");
			salary=0.0;
		}
		int getId(){
			return id;
		}
	    char  *getName(){
			return name;
		}
		Employee(int id,char *name , char *position,char *sex,float salary){
			this->id=id;
			strcpy(this->name,name);
			strcpy(this->position,position);
			strcpy(this->sex,sex);
			this->salary=salary;
		}
		void Input(){
			cout<<"Enter ID : ";cin>>id;
			cout<<"Enter Name : ";fflush(stdin);gets(name);
			cout<<"Enter Position : ";gets(position);
			cout<<"Enter Gender   : ";gets(sex);
			cout<<"Enter Salary   : ";cin>>salary;
			cout<<'\n';
		}
		void Output(){
			cout<<left<<setw(10)<<id
				<<left<<setw(10)<<name
				<<left<<setw(10)<<sex
				<<left<<setw(10)<<position
				<<left<<setw(10)<<salary<<endl;
		}
};

int main(){
	
	Employee emp[20];
	int i,j,n,op;
	
	do{
		cout<<"[1]. Input \n";
		cout<<"[2]. Output\n";
		cout<<"[3]. Search\n";
		cout<<"[4]. Update\n";
		cout<<"[5]. Delete\n";
		cout<<"[6]. Insert\n";
		cout<<"[7]. Sort ID\n";
		cout<<"[8]. Add More\n";
		cout<<"Select one option : ";
		cin>>op;
		
		switch(op){
			case 1:{
				printf("Enter number of employee => ");
				scanf("%d",&n);
				for(i=0;i<n;i++){
					cout<<"\nEmployee "<<i+1<<endl;
					emp[i].Input();
				}
				break;
			}
			case 2:{
				for(i=0;i<n;i++){
					emp[i].Output();
				}
				break;
			}
			case 3:{
				int search;
				cout<<"Enter id to search : ";
				cin>>search;
				for(i=0;i<n;i++){
					if(search==emp[i].getId()){						
						emp[i].Output();
					}
				}
				break;
			}
			case 4:{
				int update;
				cout<<"Enter id to udpate : ";
				cin>>update;
				for(i=0;i<n;i++){
					if(update==emp[i].getId()){
						emp[i].Input();
					}
				}
				break;
			}
			case 5:{
				char del[20];
				cout<<"Enter name to delete : ";
				fflush(stdin);gets(del);
				for(i=0;i<n;i++){
					if(stricmp(del,emp[i].getName())==0){
						for(j=i;j<n;j++){
							emp[j]=emp[j+1];
						}
						n--;
					}
				}
				break;
			}
			case 6:{
				int insert;
				cout<<"Enter place id you want to insert : ";
				cin>>insert;
				for(i=0;i<n;i++){
					if(insert==emp[i].getId()){
						for(j=n;j>i;j--){
							emp[j]=emp[j-1];							
						}
						emp[i].Input();							
						n++;
						break;											
					}
				}
				break;
			}
			case 7:{
				Employee emp_temp;
				for(i=0;i<n;i++){
					for(j=i+1;j<n;j++){
						if(emp[i].getId() > emp[j].getId()){
							emp_temp=emp[i];
							emp[i]=emp[j];
							emp[j]=emp_temp;
						}
					}
				}
				for(i=0;i<n;i++){
					emp[i].Output();
				}
				break;
			}
			case 8:{
				int add;
				cout<<"Add more employee : ";
				cin>>add;
				for(i=n;i<n+add;i++){
					emp[i].Input();
				}
				n=n+add;  // n+=add
				break;
			}
		}                           
		
		
	}while(op!=0);
	
	
	
	
	return 0;
}
