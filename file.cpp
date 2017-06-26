#include<iostream>
#include<fstream>
using namespace std;

int main() {
    int a[10] = {0,1,2,3,4,5,6,7,8,9};
    int b[10] = {0};
    FILE * f1 = fopen("P:\\1.dat", "wb");
    fwrite(a,sizeof(int), 10, f1);
    FILE *f2 = fopen("P:\\2.dat","rb");
    fread(b,sizeof(int),10,f2);
    for( int i = 0; i < 10; ++i) cout << b[i];
    fclose(f1);
    fclose(f2);
}
