#include<iostream>
using namespace std;


class Test{
	protected:
		int a;
		int b;
	public:
		void Input(){
			cout<<"Input a : ";cin>>a;
			cout<<"Input b : ";cin>>b;
		}
		void Output(){
			cout<<"A = "<<a<<endl;
			cout<<"B = "<<b<<endl;
		}
};
class Test1:public Test{
	private:
		int x;
	public:
		void Input(){
			Test::Input();
			cout<<"Input x : "; cin>>x;
		}
		void Output(){
			Test::Output();
			cout<<"X = "<<x<<endl;
		}
		
};

int main(){
	
	Test1 t;
	t.Input();
	t.Output();
	
	
	
	
}


