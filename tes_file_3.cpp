#include <iostream>
#include <fstream>
using namespace std;
int main() {
    // Open a file for writing at the end
    std::ofstream outputFile("example.txt", std::ios::ate);

    if (!outputFile) {
        std::cerr << "Failed to open the file for writing!" << std::endl;
        return 1;
    }

    // Write some content to the file
    outputFile << "This is some content.\n";
    outputFile << "This content will be appended to the end of the file.\n";

    
    outputFile.close();

    ifstream inputFile("example.txt");

    if (!inputFile) {
        cerr << "Failed to open the file for reading!" << endl;
        return 1;
    }

    
    inputFile.seekg(10, ios::beg); 
    string line;
    while (getline(inputFile, line)) {
        cout << line << endl;
    }


    inputFile.close();

    return 0;
}

