#include<iostream>
using namespace std;

class B1{
	protected:
		int x,y;
	public:
		B1():x(0),y(0){}
		B1(int x,int y){
			this->x=x;
			this->y=y;
		}
		void Input(){
			cout<<"Enter x : ";
			cin>>x;
			cout<<"Enter y : ";
			cin>>y;
		}
		void Output(){
			cout<<"x = "<<x<<endl;
			cout<<"y = "<<y<<endl;
		}
};

class B2:public B1{
	protected:
		int z;
	public:
		B2(){
			B1:B1();
			z=0;
		}
		B2(int z,int x,int y):B1(x,y){
			this->z=z;
		}
		void Input(){
			B1::Input();
			cout<<"Enter z : ";
			cin>>z;
			
		}
		void Output(){
			B1::Output();
			cout<<"z = "<<z<<endl;
		}		
};

class S{
	protected:
		int w;
	public:
		S(){
			w=0;
		}
		S(int w){
			this->w=w;
		}
		void Input(){
			cout<<"Enter w : ";
			cin>>w;
		}
		void Output(){
			cout<<"w = "<<w<<endl;
		}
};

class Sub:public B2,public S{
	
	public:
		Sub(){
			B2:B2();
			S:S();
		}
		Sub(int x,int y,int z,int w):B2(z,x,y),S(w){
		}
		void Input(){
			B2::Input();
			S::Input();
		}
		void Output(){
			B2::Output();
			S::Output();
		}
		
};

int main(){
	Sub s;
	s.Input();
	s.Output();
	
}
