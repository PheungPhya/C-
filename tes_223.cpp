#include<iostream>
#include<iomanip>
using namespace std;

class Super{
	protected:
		int a,b;
	public:
		Super(){
			a=0;
			b=0;
		}
		Super(int a,int b){
			this->a=a;
			this->b=b;
		}
		void Input(){
			cout<<"Enter valua a : "; cin>>a;
			cout<<"Enter valua b : "; cin>>b;
		}
		void Output(){
			cout<<"a = "<<a<<endl;
			cout<<"b = "<<b<<endl;
		}
};

class Base{
	protected:
		int x;
		int y;
	public:
		Base(){
			x=0;
			y=0;
		}
		Base(int x,int y){
			this->x=x;
			this->y=y;
		}
		void Input(){
			cout<<"Enter value x : "; cin>>x;
			cout<<"Enter value y : "; cin>>y;
		}
		void Output(){
			cout<<"x = "<<x<<endl;
			cout<<"y = "<<y<<endl;
		}
};

class Derrive : public Base{
	protected:
		int z;
	public:
		Derrive(){
			Base:Base();
			z=0;
		}
		Derrive(int x,int y,int z):Base(x,y){
			this->z=z;
		}
		void Input(){
			Base::Input();
			cout<<"Enter value z : "; cin>>z;
		}
		void Output(){
			Base::Output();
			cout<<"z = "<<z<<endl;
		}
};


class Sub:public Derrive,public Super{
	public:
		Sub(){
			Derrive:Derrive();
			Super:Super();
		}
		Sub(int a,int b,int x,int y,int z):Derrive(x,y,z),Super(a,b){
		
		}
		void Input(){
			Super::Input();
			Derrive::Input();
		}
		void Output(){
			Super::Output();
			Derrive::Output();
		}
		
};

int main(){

	Sub s;
	s.Input();
	s.Output();
}






