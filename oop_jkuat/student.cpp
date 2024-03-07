/*Write a program that prompts the user for a student's name, course, fee payable
and fee paid. The program should then compute the fees balance and then output all
the student details including the fees balance. The program must make use of class
called Student with appropriate data members and member functions
*/
#include <iostream>

using namespace std;

class Student
{
    char name[30];
    char course[30];
    float feePayable;
    float feePaid;
public:
    void setValues();
    void displayDetails();
    float getBalance();
};

void Student::setValues()
{
    cout << "Enter your name: ";
    cin.getline(name, 24);
    cout << "Enter your course: ";
    cin.getline(course, 24);
    cout << "Enter fees payable: ";
    cin >> feePayable;
    cout << "Enter fees paid: ";
    cin >> feePaid;
}

float Student::getBalance()
{
    return float(feePayable - feePaid);
}

void Student::displayDetails()
{
    cout << "Student name: " << name << endl;
    cout << "Student course: " << course << endl;
    cout << "Fees balance: " << getBalance() << endl;
}

int main()
{
    Student s1;
    s1.setValues();
    s1.displayDetails();
}
