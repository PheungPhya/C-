#include<iostream>
using namespace std;

class B1{
	protected:
		int x,y;
	public:
		void Input(){
			cout<<"Input x : "; cin>>x;
			cout<<"Input y : "; cin>>y;
		}
		void Output(){
			cout<<"x = "<<x<<endl;
			cout<<"y = "<<y<<endl;
		}
};

class B2:public B1{
	protected:
		int z;
	public :
		void Input(){
			B1::Input();
			cout<<"Enter z : ";cin>>z;
		}
		void Output(){
			B1::Output();
			cout<<"z = "<<z<<endl;
		}
};

class Sub:public B2{
	public:
		void Input(){
			B2::Input();
		}
		void Output(){
			B2::Output();
		}
};


int main(){
	Sub s;
	s.Input();
	s.Output();
	
	return 0;
}
