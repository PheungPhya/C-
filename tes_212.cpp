#include<iostream>
#include<iomanip>
using namespace std;

class Employee{
	private:
		int id;
		string name,gender;
		float salary;
	public:
		Employee(){
			id=0;
			name="null";
			gender="null";
			salary=0.0;
		}
		void Input(){
			cout<<"Enter ID     : ";	cin>>id;
			cout<<"Enter Name   : ";	fflush(stdin);getline(cin,name);
			cout<<"Enter Gender : ";	getline(cin,gender);
			cout<<"Enter Salary : ";    cin>>salary;		
		}
		void Output(){
			cout<<setw(10)<<id
				<<setw(10)<<name
				<<setw(10)<<gender
				<<setw(10)<<salary
				<<endl;
		}
		int getId(){
			return id;
		}
};

int main(){
	Employee emp[20];
	int i,j,op,n=1;
	
	do{
		cout<<"[1]. Input"<<endl;
		cout<<"[2]. Output"<<endl;
		cout<<"[3]. Search"<<endl;
		cout<<"[4]. Update"<<endl;
		cout<<"[5]. Delete"<<endl;
		cout<<"[6]. Insert"<<endl;
		cout<<"[7]. Sort_ID"<<endl;
		cout<<"[8]. Add"<<endl;
		cout<<"[9]. Clear"<<endl;
		cout<<"[10]. Exit"<<endl;
		cout<<"==========================="<<endl;
		cout<<"Choose one option (1-10) => ";
		cin>>op;
		
		switch(op){
			case 1:{
				cout<<"Enter number of Employee : ";
				cin>>n;
				for(i=0;i<n;i++){
					cout<<"\n======> Employee "<<i+1<<endl;
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
				cout<<"Enter Id to search : ";
				cin>>search;
				for(i=0;i<n;i++){
					if(search == emp[i].getId()){
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
					if(update==emp[i].getId()){
						cout<<"I want to update this employee"<<endl;
						emp[i].Output();
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
					if(del == emp[i].getId()){
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
				cout<<"Enter place it to insert : ";
				cin>>insert;
				for(i=0;i<n;i++){
					if(emp[i].getId() == insert){
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
				Employee temp;
				for(i=0;i<n;i++){
					for(j=i+1;j<n;j++){
						if(emp[i].getId() > emp[j].getId()){
							temp=emp[i];
							emp[i]=emp[j];
							emp[j]=temp;
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
				cout<<"Enter value number of employee to add : ";
				cin>>add;
				for(i=n;i<n+add;i++){
					cout<<"\n======> Employee "<<i+1<<endl;
					emp[i].Input();
				}
				n=n+add;
				break;
			}
			case 9:{
				system("cls");
				break;
			}
			case 10:{
				cout<<"Good bye ..!"<<endl;
				exit(1);
				break;
			}
			default:{
				cout<<"Try again :\n wrong option "<<endl;
				break;
			}
		}	
	}while(1);
	return 0;
}


