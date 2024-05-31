#include<iostream>
#include<iomanip>
using namespace std;

class Bank{
	protected:
		int id;
		string name;
		string gender;
	public:
		void Input(){
			cout<<"Enter Id     : "; cin>>id;
			cout<<"Enter Name   : "; fflush(stdin);getline(cin,name);
			cout<<"Enter Gender : "; getline(cin,gender);
		}
		void Output(){
			cout<<left<<setw(10)<<id
				<<left<<setw(10)<<name
				<<left<<setw(10)<<gender;
		}
	
};

class Staff:public Bank{
	private:
		float salary;
	public:
		void Input(){
			Bank::Input();
			cout<<"Enter Salary : "; cin>>salary;
		}
		void Output(){
			Bank::Output();
			cout<<left<<setw(10)<<salary<<endl;
		}
		
};

int main(){
	Staff st;
	st.Input();
	st.Output();
	return 0;
}
