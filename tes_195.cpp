#include<iostream>
#include<iomanip>
using namespace std;

class Test{
	private:
		int code;
		string name;
		string sex;
		float salary;
	public:
		void Input(){
			cout<<"Enter code : "; cin>>code;
			cout<<"Enter name : "; fflush(stdin);getline(cin,name);
			cout<<"Enter sex  : "; getline(cin,sex);
			cout<<"Enter salary: "; cin>>salary;
		}
		void Output(){
			cout<<left<<setw(10)<<code   // %-10d = left<<setw(10)
				<<left<<setw(10)<<name   // %-10s
				<<left<<setw(10)<<sex
				<<left<<setw(10)<<salary
				<<endl;
		}
	
};

int main(){
	Test t;
	t.Input();
	t.Output();
		
	return 0;
}
