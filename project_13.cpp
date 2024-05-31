#include<iostream>
#include<iomanip>
using namespace std;

class Worker{
	private:
		int id,hour;
		string name,gender;
		float salary,rate,income;
	public:
		void Input(){
			cout<<"Enter Id     : "; cin>>id;
			cout<<"Enter Name   : "; fflush(stdin);getline(cin,name);
			cout<<"Enter Gender : "; getline(cin,gender);
			cout<<"Enter Salary : "; cin>>salary;
			cout<<"Enter Rate   : "; cin>>rate;
			cout<<"Enter Hour   : "; cin>>hour;
			income = salary + ( hour * rate );
		}
		void Output(){
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
		float getIncome(){
			return income;
		}
};

int main(){
	Worker w[20];
	int i,j,op,n=1;
	
	do{
		cout<<"[1]. Input"<<endl;
		cout<<"[2]. Output"<<endl;
		cout<<"[3]. Search"<<endl;
		cout<<"[4]. Max_Income"<<endl;
		cout<<"[5]. Min_Income"<<endl;
		cout<<"[6]. Equal_Income"<<endl;
		cout<<"[7]. Sort_Id"<<endl;
		cout<<"[8]. Sum_Income"<<endl;
		cout<<"======================"<<endl;
		cout<<"Select one option => ";
		cin>>op;
		
		switch(op){
			case 1:{
				cout<<"Enter number of worker : ";
				cin>>n;
				for(i=0;i<n;i++){
					cout<<"\n=========Worker "<<i+1<<endl;
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
					if(w[max].getIncome() < w[i].getIncome()){
						max=i;
					}
				}
				w[max].Output();
				break;
			}
			case 5:{
				int min=0;
				for(i=0;i<n;i++){
					if(w[min].getIncome() > w[i].getIncome()){
						min=i;
					}
				}
				w[min].Output();
				break;
			}
			case 6:{
				int eq=0;
				bool f;
				for(i=0;i<n;i++){
					f=true;
					for(j=0;j<n;j++){
						if(i!=j && w[i].getIncome() == w[j].getIncome() ){
							if(f){
								f=false;
								w[i].Output();
							}
						}	
					}
				}
				break;
			}
		}
		
	}while(op!=0);
	
}
