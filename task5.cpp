#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    
    ifstream inputFile("input.txt");
    string line;

    if (inputFile.is_open()) {
        cout << "Contents of input.txt:" << endl;
        while (getline(inputFile, line)) {
            cout << line << endl;  
        }
        inputFile.close();  
    } else {
        cout << "Unable to open input.txt" << endl;
    }

   
    ofstream outputFile("output.txt");
    string userInput;

    if (outputFile.is_open()) {
        cout << "\nEnter text to write to output.txt (type 'exit' to stop):" << endl;
        while (true) {
            getline(cin, userInput);  

            if (userInput == "exit") {  
                break;
            }

            outputFile << userInput << endl;  
        }
        outputFile.close();  
    } else {
        cout << "Unable to open output.txt" << endl;
    }

    return 0;
}