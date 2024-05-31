#include<iostream>
#include<iomanip>
using namespace std;

class Base{
	protected:
		int x,y;
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

class Sub:public Derrive{
	private:
		int w;
	public:
		Sub(){
			Derrive:Derrive();
			w=0;
		}
		Sub(int x,int y,int z,int w):Derrive(x,y,z){
			this->w=w;
		}
		void Input(){
			Derrive::Input();
			cout<<"Enter value w : "; cin>>w;
		}
		void Output(){
			Derrive::Output();
			cout<<"w = "<<w<<endl;
		}
};

int main(){
	
	Sub s(1,2,3,4);
	s.Output();
	s.Input();
	s.Output(); 
	
 	
	
	
	
	return 0;
}



