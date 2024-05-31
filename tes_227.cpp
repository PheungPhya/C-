#include<iostream>
#include<iomanip>
using namespace std;

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

class Derrive:public Base{
	protected:
		int w;
	public:
		Derrive(){
			Base:Base();
			w=0;
		}
		Derrive(int x,int y,int w):Base(x,y){
			this->w=w;
		}
		void Input(){
			Base::Input();
			cout<<"Enter value w : "; cin>>w;
		}
		void Output(){
			Base::Output();
			cout<<"w = "<<w<<endl;
		}
};

class Base1{
	protected:
		int a,b;
	public:
		Base1(){
			a=0;
			b=0;
		}
		Base1(int a,int b){
			this->a=a;
			this->b=b;
		}
		void Input(){
			cout<<"Enter value a : "; cin>>a;
			cout<<"Enter value b : "; cin>>b;
		}
		void Output(){
			cout<<"a = "<<a<<endl;
			cout<<"b = "<<b<<endl;
		}
};


class Sub:public Derrive,public Base1{
	private:
		int z;
	public:
		Sub(){
			Derrive:Derrive();
			Base1:Base1();
			z=0;
		}
		Sub(int x,int y,int w,int z,int a,int b):Derrive(x,y,z),Base1(a,b){
			this->z=z;
		}
		void Input(){
			Derrive::Input();
			cout<<"Enter value z : "; cin>>z;
			Base1::Input();
		}
		void Output(){
			Derrive::Output();
			cout<<"z = "<<z<<endl;
			Base1::Output();
		}
};

int main(){
	
	Sub s;
	s.Input();
	s.Output();
	

	
	return 0;
} 
