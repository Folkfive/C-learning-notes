#include<iostream>
#include<fstream>
using namespace std;

int main() {
    int a;
    string b;
    double c;
    ifstream inFile;
    ofstream outFile;
    inFile.open("input.txt");
    outFile.open("output.txt");
    inFile >> a >> b >> c;
    outFile << c << b << a;
    inFile.close();
    outFile.close();
}
