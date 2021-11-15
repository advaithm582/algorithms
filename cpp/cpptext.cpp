#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "Hello World!" << endl;
    string name;
    cout << "Your Name? ";
    // cin >> name;
    getline(cin, name);
    cout << name << ", you are just Awesome!" << endl;
    return 0;
}