#include<iostream>
#include<fstream>
using namespace std;

int main(){
	
	fstream file;
	file.open("Etec4.txt",ios::app);
	char st[100];
	
	
	cout<<"Enter word string : "; cin.getline(st,100);
	file<<st<<endl;
	file.close();
	
	
	return 0;
}
