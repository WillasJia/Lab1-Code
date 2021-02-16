// Lab1-Code.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Header.h"
#include <fstream>
#include <vector>
#include <string>
using namespace std;

int Success = 0;
int InvalidFile = 1;
int MissedFileName = 2;


int parsing(vector<string>& lines, char* fileName) {
    ifstream input;
    input.open(fileName);
    string line;
    
    if (input.is_open()) {
        while (input >> line) {
            lines.push_back(line);
        }
        return Success;
    }
    else {
        return InvalidFile;
    }
}

int usageMessage(char* programName) {
    cout << "This program reads and parses some strings from a text file." << endl
        << "Type in the name for the file." << programName << endl;
    return MissedFileName;
}

int main(int argc, char* argv[])
{   
    const int argcNum = 2;
    const int programName = 0;
    if (argc = argcNum) {}
    else {
        return usageMessage(argv[programName]);
    }
    std::cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
