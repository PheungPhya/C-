#include<iostream>
#include<iomanip>
using namespace std;

class Worker{
	private :
		int id,hour;
		string name,gender;
		float salary,rate,income;
	public : 
		void Input(){
			cout<<"Enter ID     : ";	cin>>id;
			cout<<"Enter Name   : ";	fflush(stdin);getline(cin,name);
			cout<<"Enter Gender : ";	getline(cin,gender);
			cout<<"Enter Salary : ";	cin>>salary;
			cout<<"Enter Rate   : ";	cin>>rate;
			cout<<"Enter Hour   : ";	cin>>hour;
			income = salary + (hour * rate);
		}
		void Output(){
			cout<<setw(10)<<id
				<<setw(10)<<name
				<<setw(10)<<gender
				<<setw(10)<<salary
				<<setw(10)<<rate
				<<setw(10)<<hour
				<<setw(10)<<income
				<<endl;
		}
		void Update(){
			income = income + (income * 15/100);
		}
		int getId(){
			return id;
		}
		float getIncome(){
			return income;
		}
};

void Head(){
	cout<<setw(10)<<"ID"
		<<setw(10)<<"NAME"
		<<setw(10)<<"GENDER"
		<<setw(10)<<"SALARY"
		<<setw(10)<<"RATE"
		<<setw(10)<<"HOUR"
		<<setw(10)<<"INCOME"
		<<endl;
		cout<<setw(70)<<string(65,'-')<<endl;
	}


int main(){
	Worker w[20];
	int i,j,n=1,op;
	
	do{
		cout<<"[1]. Input"<<endl;
		cout<<"[2]. Output"<<endl;
		cout<<"[3]. Search"<<endl;
		cout<<"[4]. Maximum_Income"<<endl;
		cout<<"[5]. Minimum_Income"<<endl;
		cout<<"[6]. Equal_Income"<<endl;
		cout<<"[7]. Sum_Income"<<endl;
		cout<<"[8]. Add 15% that <= 150"<<endl;
		cout<<"======================"<<endl;
		cout<<"Choose one option => ";
		cin>>op;
		
		switch(op){
			case 1:{
				cout<<"Enter number of worker : ";
				cin>>n;
				for(i=0;i<n;i++){
					cout<<"\n======> Worker "<<i+1<<endl;
					w[i].Input();
				}
				break;
			}
			case 2:{
				Head();
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
					if(w[max].getIncome()<w[i].getIncome()){
						max=i;
					}
				}				
				Head();
				w[max].Output();
				break;
			}
			case 5:{
				
				int min=0;
				for(i=0;i<n;i++){
					if(w[min].getIncome()>w[i].getIncome()){
						min=i;
					}
				}
				Head();
				w[min].Output();
				break;
			}
			case 6:{
				bool f;
				for(i=0;i<n;i++){
					f=true;
					for(j=0;j<n;j++){
						if(i!=j && w[i].getIncome() == w[j].getIncome()){
							if(f){
								f=false;
								w[i].Output();
							}
						}
					}
				}
				break;
			}
			case 7:{
				float sum=0;
				for(i=0;i<n;i++){
					sum = sum + w[i].getIncome();
				}
				cout<<"Total Income is : "<<sum<<'$'<<endl;
				break;
			}
			case 8:{
				cout<<"Bonus 15% to worker that less than < 150$ "<<endl;
				for(i=0;i<n;i++){
					if(w[i].getIncome()<= 150){
						w[i].Update();
					}
				}
				Head();
				for(i=0;i<n;i++){
					w[i].Output();
				}				
				break;
			}	
		}
	}while(op!=0);
	return 0;
}
