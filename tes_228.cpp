#include<iostream>
using namespace std;

class Base{
	public:
		virtual void Output()=0;
};

class Sub:public Base{
	public:
		void Show(){
			cout<<"I am sub class"<<endl;
		}
		void Output(){
			cout<<"Inheritance from base: "<<endl;
		}
};

class Sub1:public Base{
	public:
		void Display(){
			cout<<"I am class sub1"<<endl;
		}
		void Output()
		{
		}
};

int main(){
	
	Sub s;
	s.Show();
	
	Sub1 s1;
	s1.Display();
	
	
	
	return 0;
}



