#include <iostream>
using namespace std;

class Person {
    char name[30];
    char reg_no[25];
    int age;
public:
    void getDetails(void);
    void displayDetails(void);
};
void Person::getDetails(void) {
    cout << "Enter your name: ";
    cin.getline(name, 45);
    cout << "Enter your registration number: ";
    cin.getline(reg_no, 45);
    cout << "Enter your age: ";
    cin >> age;
};
void Person::displayDetails(void) {
    cout << "Name: " << name << endl;
    cout << "Registration number: " << reg_no << endl;
    cout << "Age: " << age << endl;
};

int main(void) {
    Person p;
    p.getDetails();
    p.displayDetails();
    return (0);
};


friend Class T;
//members of a class are invoked usin dot operator
//friend functions are called without using the object since they dont belong to that class
//friend functions take objects as arguments
// cin and cout are objects of the class iostream
// cin is an object that has a getline function
// use of getline function
// cin.getline(variable_to_store, number of characters)
