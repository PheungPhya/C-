#include<iostream>
#include<iomanip>
using namespace std;

class Base{
	public:
		void Output(){
			cout<<"Hello I am base class "<<endl;
		}
		void display(){
			cout<<"I'm Base class"<<endl;
		}
};

class Sub : public Base{
	public:
		void Output(){
			Base::Output();
			cout<<"Hi I am sub class"<<endl;
		}
};

int main(){
	
	Sub s;
	s.Output();
	
	return 0;
}
