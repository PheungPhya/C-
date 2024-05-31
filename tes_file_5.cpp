#include<iostream>
#include<fstream>
using namespace std;

int main(){
	
	ifstream file;
	file.open("example.txt",ios::ate);
	
	file.seekg(10,ios::beg);
	string line;
    while (getline(file, line)) {
        cout << line << endl;
    }
    file.close();
	
	return 0;
}

