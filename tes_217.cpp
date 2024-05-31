#include<iostream>
using namespace std;

class Base{
	public:
	virtual void Output()=0;
};

class Sub:public Base{
	public:
		void Output(){
			cout<<"HEllo world"<<endl;
		}
		void show(){
			cout<<"Hi world"<<endl;
		}
		
};

int main(){
	Sub s;
	s.show();
	s.Output();

	
	
	return 0;
}
