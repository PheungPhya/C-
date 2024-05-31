#include<iostream>
using namespace std;

class Base1{
	protected:
		int x;
		int y;
	public:
		void Input(){
			cout<<"Enter value x : "; cin>>x;
			cout<<"Enter value y : "; cin>>y;
		}
		void Output(){
			cout<<"x = "<<x<<endl;
			cout<<"y = "<<y<<endl;
		}
};

class Base2{
	protected:
		int z;
	public:
		void Input(){
			cout<<"Enter value z : "; cin>>z;
		}
		void Output(){
			cout<<"z = "<<z<<endl;
		}
};

class Sub:public Base1,public Base2{
	private:
		int s;
	public:
		void Input(){
			Base1::Input();
			Base2::Input();
			cout<<"Enter value s : "; cin>>s;
		}
		void Output(){
			Base1::Output();
			Base2::Output();
			cout<<"s = "<<s<<endl;
		}
};


int main(){
	Sub s;
	s.Input();
	s.Output();
	
	return 0;
}
