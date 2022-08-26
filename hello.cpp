#include <iostream>
using namespace std;

int main()
{
    int a = 5;       // 4 bytes
    char b = 'b';    // 1 byte
    bool c = 1;      // 1 bit
    float d = 1.2;   // 8 bytes
    double e = 1.23; // 8 bytes

    cout << "Hello world" << endl;
    cout << sizeof(e) << endl; // returns size of object as integer

    // variables are typecasted into one another
    int achar = 'A';
    char cint = 65;
    cout << cint << endl;

    bool equal = a == b;
    cout << equal;
}