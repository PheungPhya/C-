#include<iostream>
#include<iomanip>
using namespace std;

class Employee{
	private :
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
			cout<<"Enter ID : ";       cin>>id;
			cout<<"Enter Name : ";     fflush(stdin);getline(cin,name);
			cout<<"Enter Gender : ";   getline(cin,gender);
			cout<<"Enter Position : "; getline(cin,position);
			cout<<"Enter Salary   : "; cin>>salary;  
		}
		void Output(){
			cout<<left<<setw(10)<<id  
				<<left<<setw(10)<<name
				<<left<<setw(10)<<gender
				<<left<<setw(10)<<position
				<<left<<setw(10)<<salary
				<<endl;
		}
		int getId(){
			return id;
		}
};

void head(){
	cout<<string(45,'-')<<endl;
	cout<<left<<setw(10)<<"ID"
		<<left<<setw(10)<<"NAME"
		<<left<<setw(10)<<"GENDER"
		<<left<<setw(10)<<"POSITION"
		<<left<<setw(10)<<"SALARY"
		<<endl;
}

int main(){
		
	Employee emp[20];
	int i,n=1,j,op;
	
	do{
		cout<<"[1]. Input "<<endl;
		cout<<"[2]. Output"<<endl;
		cout<<"[3]. Search"<<endl;
		cout<<"[4]. Update"<<endl;
		cout<<"[5]. Delete"<<endl;
		cout<<"[6]. Insert"<<endl;
		cout<<"[7]. Sort  "<<endl;
		cout<<"[8]. Add   "<<endl;
		cout<<"Press number zero(0) for exit"<<endl;
		cout<<"=============================="<<endl;
		cout<<"Choose one option => ";
		cin>>op;
		
		switch(op){
			case 1:{
				cout<<"How many employee do you want to input : ";
				cin>>n;
				for(i=0;i<n;i++){
					cout<<"====> Employee "<<i+1<<endl;
					emp[i].Input();
					cout<<'\n';
				}
				break;
			}
			case 2:{
				head();
				for(i=0;i<n;i++){
					emp[i].Output();
				}
				cout<<'\n'; 
				break;
			}
			case 3:{
				int search;
				cout<<"Which id do you want to search : ";
				cin>>search;
				for(i=0;i<n;i++){
					if(search==emp[i].getId()){
						head();
						emp[i].Output();
					}
				}
				break;
			}
			case 4:{
				int update;
				cout<<"Which id do you want to update : ";
				cin>>update;
				for(i=0;i<n;i++){
					if(emp[i].getId()==update){
						emp[i].Input();
					}
				}
				break;
			}
			case 5:{
				int del;
				cout<<"Which id do you want to delete : ";
				cin>>del;
				for(i=0;i<n;i++){
					if(del==emp[i].getId()){  
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
				cout<<"Where id do you want to insert : ";
				cin>>insert;
				for(i=0;i<n;i++){
					if(insert==emp[i].getId()){
						for(j=n;j>i;j--){
							emp[j]=emp[j-1];
						}
						n++;
						emp[i].Input();
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
				head();
				for(i=0;i<n;i++){
					emp[i].Output();
				}
				break;
			}
			case 8:{
				int add;
				cout<<"How many employee do you want to add more : ";
				cin>>add;
				for(i=n;i<n+add;i++){
					emp[i].Input();
				}
				n=n+add;
				break;
			}
			default:{
				cout<<"Please try again"<<endl;
				cout<<"There are not option "<<op<<endl;
				break;
			}
		}	
	}while(op!=0);
	
	return 0;
}
