#include <iostream>
using namespace std;
    string black = "\u001b[30m";
    string red = "\u001b[31m";
    string green = "\u001b[32m";
    string yellow = "\u001b[33m";
    string blue = "\u001b[34m";
    string magenta = "\u001b[35m";
    string cyan = "\u001b[36m";
    string white = "\u001b[37m";
    string reset = "\u001b[0m";
int main(){
    cout << endl;
    cout << green << "Compile #1 ✅" << endl;
    cout << green << "Compile #2 ✅" << endl;
    cout << green << "Compile #3 ✅" << endl;
    cout << endl;
    cout << red << "-------------------Compile--------------------" << reset;
    cout << endl;
    system("g++ main.cpp -o tetus");
    system("./tetus");
    cout << red << "----------------------------------------------" << reset << endl;

}