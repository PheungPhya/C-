#include<iostream>
using namespace std;

class Base{
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

class Sub1:public Base{
	private: 
		int z;
	public:
		void Input(){
			Base::Input();
			cout<<"Enter value z : "; cin>>z;
		}
		void Output(){
			Base::Output();
			cout<<"z = "<<z<<endl;
		}
};

class Sub2:public Base{
	private:
		int w;
	public:
		void Input(){
			Base::Input();
			cout<<"Enter value w : "; cin>>w;
		}
		void Output(){
			Base::Output();
			cout<<"w = "<<w<<endl;
		}
};





int main(){
	
	Sub1 s1;
	Sub2 s2;
	
	s1.Input();
	s1.Output();
	
 	cout<<"============"<<endl;
 	s2.Input();
 	s2.Output();
	
	
}
