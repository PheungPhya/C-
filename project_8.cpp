#include<iostream>
#include<iomanip>
#include<stdlib.h>
using namespace std;
class Employee{
	private:
		int id;
		char name[20];
		char gender[20];
		float salary;
	public:
		int getId(){
			return id;
		}
		void Input(){
			cout<<"Input ID : ";
			cin>>id;
			cout<<"Input Name : ";
			fflush(stdin);cin.getline(name,20);
			cout<<"Input Gender : ";
			cin.getline(gender,20);
			cout<<"Input Salary : ";
			cin>>salary;
		}
		void Output(){
			cout<<string(35,'-')<<endl;
			cout<<left<<setw(10)<<id
				<<left<<setw(10)<<name
				<<left<<setw(10)<<gender
				<<left<<setw(10)<<salary<<endl;
		}
};

int Menu(){
	int op;
	cout<<"[1]. Input"<<endl;
	cout<<"[2]. Output"<<endl;
	cout<<"[3]. Search"<<endl;
	cout<<"[4]. Update"<<endl;
	cout<<"[5]. Sort"<<endl;
	cout<<"[6]. Exit"<<endl;
	cout<<"================="<<endl;
	cout<<"Select one option : ";
	cin>>op;
	return op;
}

int main(){
	Employee *emp,temp_emp[20];	
	int i,n,j;
		
	do{
		switch(Menu()){
			case 1:{
				cout<<"Enter number of employee :> ";	
				cin>>n;				
				emp=new Employee[n];
				//emp = (Employee*)malloc(n*sizeof(Employee));				
				for(i=0;i<n;i++){
					(emp+i)->Input();
				}
				break;
			}
			case 2:{
				for(i=0;i<n;i++){
					(emp+i)->Output();
				}
				break;
			}
			case 3:{
				int search;
				cout<<"Enter id to search : ";
				cin>>search;
				for(i=0;i<n;i++){
					if(search==(emp+i)->getId()){
						(emp+i)->Output();
					}
				}
				break;
			}
			case 4:{
				int update;
				cout<<"Enter id to search : ";
				cin>>update;
				for(i=0;i<n;i++){
					if(update==(emp+i)->getId()){
						(emp+i)->Output();
					}
				}
				break;
			}
			case 5:{
				for(i=0;i<n;i++){
					for(j=0;j<n-1;j++){
						if((emp+j)->getId() > (emp+j+1)->getId()){
							*(temp_emp+j)=*(emp+i);
							*(emp+i)=*(emp+j+1);
							*(emp+j+1)=*(temp_emp+j);
						}
					}
				}
				
				for(i=0;i<n;i++){
					(emp+i)->Output();
				}
				break;
			}
			case 6:{
				cout<<"Good Bye!!"<<endl;
				exit(1);
				break;
			}
		}
		
	}while(1);
	
	return 0;
}
