#include<iostream>
using namespace std;

int main() {
    
    char str[100];
    cout << "enter a string";
    cin >> str;
    cout << "you entered :" << str << endl;
    cout << "\nEnter another string; ";
    cin >> str;
    cout << "you entered : "<<str<<endl;
    return 0;
}