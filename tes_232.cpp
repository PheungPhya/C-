#include<iostream>
#include<fstream>
using namespace std;

int main(){
	fstream file;
	file.open("Etec_3.txt",ios::in);
	char str[100];
	
	
	if(!file){
		cout<<"Can't find file"<<endl;
	}

	file.getline(str,100);
	cout<<str<<endl;

	return 0;
}
