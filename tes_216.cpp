#include<iostream>
#include<iomanip>
#include<stdbool.h>
using namespace std;

class Worker{
	private:
		int id,hour;
		string name,gender;
		float rate,salary,income;
	public:
		void Input(){
			cout<<"Enter ID       : ";	cin>>id;
			cout<<"Enter Name     : ";	fflush(stdin);getline(cin,name);
			cout<<"Enter Gender   : ";	getline(cin,gender);
			cout<<"Enter Salary   : ";	cin>>salary;
			cout<<"Enter Rate     : ";	cin>>rate;
			cout<<"Enter Hour     : "; 	cin>>hour;
			income = salary + (rate * hour);
		}
		void Output(){
			cout<<string(35,'-')<<endl;
			cout<<left<<setw(10)<<id
				<<left<<setw(10)<<name
				<<left<<setw(10)<<gender
				<<left<<setw(10)<<salary
				<<left<<setw(10)<<rate
				<<left<<setw(10)<<hour
				<<left<<setw(10)<<income
				<<endl;
		}
		int getId(){
			return id;
		}
		int getIcome(){
			return income;
		}
};

int main(){
	Worker w[20];
	int i,j,n=1,op;
	
	do{
		cout<<"[1]. Input"<<endl;
		cout<<"[2]. Output"<<endl;
		cout<<"[3]. Search"<<endl;
		cout<<"[4]. Max_Income"<<endl;
		cout<<"[5]. Min_Income"<<endl;
		cout<<"[6]. Equal_Income"<<endl;
		cout<<"[7]. Sort_Id"<<endl;
		cout<<"[8]. Sum_Income"<<endl;
		cout<<"[9]. Update"<<endl;
		cout<<"[10]. Insert"<<endl;
		cout<<"[11]. Delete"<<endl;
		cout<<"[0]. Exit"<<endl;
		cout<<"======================"<<endl;
		cout<<"Choose one option => ";
		cin>>op;
		
		switch(op){
			case 1:{
				cout<<"Enter number of worker : ";
				cin>>n;
				for(i=0;i<n;i++){
					cout<<"\n====> Worker "<<i+1<<endl;
					w[i].Input();
				}
				break;
			}
			case 2:{
				for(i=0;i<n;i++){
					w[i].Output();
				}
				break;
			}
			case 3:{
				int search;
				cout<<"Enter id to search : ";
				cin>>search;
				for(i=0;i<n;i++){
					if(search == w[i].getId()){
						w[i].Output();
					}
				}
				break;
			}
			case 4:{
				int max=0;
				for(i=0;i<n;i++){
					if(w[max].getIcome() < w[i].getIcome()){
						max=i;
					}
				}
				w[max].Output();
				break;
			}
			case 5:{
				int min=0;
				for(i=0;i<n;i++){
					if(w[min].getIcome() > w[i].getIcome()){
						min=i;
					}
				}
				w[min].Output();
				break;
			}
			case 6:{
				for(i=0;i<n;i++){
					bool found=false;
					for(j=0;j<n;j++){
						if(w[i].getIcome() == w[j].getIcome() && w[i].getIcome()!=w[i].getIcome()){
							found=true;
						}
					}
					if(found==true){
						w[i].Output();
					}
					
				}
				break;
			}
			
		}
		
	}while(op!=0);
	
	
	
	return 0;
}
