#include <iostream>

using namespace std;

int main()
{
    //int age;
    //cout << "Enter your age: ";
    //cin >> age;

    string name;
    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Hello " << name << endl;

    //cout << "\nYou are " << age << " years old" << endl;

    return 0;
}
