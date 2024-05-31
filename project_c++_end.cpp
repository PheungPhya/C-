#include<iostream>
using namespace std;

class Worker{
	private : 
		int id,hour;
		string name,gender;
		float salary,rate;
	public:
		void Input(){
			cout<<"Enter Id     : "; cin>>id;
			cout<<"Enter Name   : "; fflush(stdin);getline(cin,name);
			cout<<"Enter Gender : "; getline(cin,gender);
			cout<<"Enter Salary : "; cin>>salary;
			cout<<"Enter Rate   : "; cin>>rate;
			cout<<"Enter Hour   : "; cin>>hour;
		}
		float Income(){
			float income;
			income = salary + (rate*hour);
			return income;
		}
		void Output(){
			cout<<setw(10)<<id
				<<setw(10)<<name
				<<setw(10)<<gender
				<<setw(10)<<salary
				<<setw(10)<<rate
				<<setw(10)<<hour
				<<setw(10)<<income()
				<<endl;
		}	
		
		
};
