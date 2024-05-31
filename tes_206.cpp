#include<iostream>
#include<iomanip>
using namespace std;

class Employee{
	private:
		int id;
		string name,gender,position;
		float salary;
	public:
		Employee(){
			id=0;
			name="null";
			gender="null";
			position="null";
			salary=0.0;
		}
		void Input(){
			cout<<"Enter ID       : ";	cin>>id;
			cout<<"Enter Name     : ";	fflush(stdin);getline(cin,name);
			cout<<"Enter Gender   : ";	getline(cin,gender);
			cout<<"Enter Position : ";	getline(cin,position);
			cout<<"Enter Salary   : ";	cin>>salary;
		}
		void Output(){
			cout<<setw(10)<<id
				<<setw(10)<<name
				<<setw(10)<<gender
				<<setw(10)<<position
				<<setw(10)<<salary
				<<endl;
		}
		int getId(){
			return id;
		}
};

int main(){
	
	Employee emp[20];
	int i,j,n=1,op;
	
	do{
		cout<<"[1]. Input"<<endl;
		cout<<"[2]. Output"<<endl;
		cout<<"[3]. Search"<<endl;
		cout<<"[4]. Update"<<endl;
		cout<<"[5]. Delete"<<endl;
		cout<<"Press number zero(0) for exit"<<endl;
		cout<<"============================="<<endl;
		cout<<"Choose one option => ";
		cin>>op;
		
		switch(op){
			case 1:{
				cout<<"Enter number of Employee : ";
				cin>>n;
				for(i=0;i<n;i++){
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
				cout<<"Enter id to update : ";
				cin>>update;
				for(i=0;i<n;i++){
					if(emp[i].getId() == update){
						emp[i].Input();
					}
				}
				break;
			}
			case 5:{
				int del;
				cout<<"Enter id to delete : ";
				cin>>del;
				for(i=0;i<n;i++){
					if(emp[i].getId()==del){
						for(j=i;j<n;j++){
							emp[j]=emp[j+1];
						}
						n--;
					}
				}
				break;
			}
			default:{
				cout<<"Please Try again"<<endl;
				break;
			}
		}
		
		
	}while(op!=0);


	return 0;
}
