#include<iostream>
using namespace std;

class Base{
	public:
		virtual void Show()=0;
		virtual void Input()=0;
			
};

class Sub:public Base{
	private:
		int id;
	public:
		void Input(){
			cout<<"Enter Id : "; cin>>id;
		}
		
		void Show(){
			cout<<"Id = "<<id<<endl;
		}
		
};



int main(){
	
	Sub s;
	s.Input();
	s.Show();
	
	return 0;
}
