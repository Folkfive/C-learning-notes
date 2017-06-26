#include<iostream>
#include<fstream>
using namespace std;

int main() {
    int a;
    string b;
    double c;
    ifstream inFile;
    ofstream outFile;
    fstream binaryio("P:\\Github\\city.bat", ios::in | ios::binary);
    double array[5] = {1.1, 1.2, 1.3, 1.4, 1.5};
    binaryio.write(reinterpret_cast<char*>(&array), sizeof( array) );
    binaryio.close();
    inFile.close();
    outFile.close();
}
