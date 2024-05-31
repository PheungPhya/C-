#include<iostream>
using namespace std;

class Base{
	public:
		virtual void Output(){
			cout<<"Hello I'm base class..!"<<endl;
		}
};

class Sub:public Base{
	public:
		void Output(){
			cout<<"Hello I'm Sub class..!"<<endl;
		}
};

class Sub1:public Base{
	public:
		void Output(){
			cout<<"Hello I'm Sub1 class..!"<<endl;
		}
};

int main(){
	Base *b = new Base();
	b->Output();
	
	Base *sub = new Sub();
	sub->Output();
	
	Base *sub1 = new Sub1();
	sub1->Output();
	
		
}
