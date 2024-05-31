#include <iostream>
#include <fstream>
using namespace std;

int main() {
//    ofstream outputFile("example1.txt",ios::ate);
//
//    if (!outputFile) {
//        cerr << "Failed to open the file." << endl;
//        return 1;
//    }
//
//    
//    outputFile << "This is some text appended at the end of the file." <<endl;
//
//    
//    outputFile.close();

	ifstream inputFile("example1.txt");
	inputFile.seekg(10, ios::beg); 

    if (!inputFile) {
        cerr << "Failed to open the file." << endl;
        return 1;
    }

	string line;
    while (getline(inputFile, line)) {
        cout << line << endl;
    }

    
    inputFile.close();

    return 0;
}

