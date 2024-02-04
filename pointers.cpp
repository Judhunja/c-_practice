#include <iostream>

using namespace std;

int main()
{
    int age = 19;
    int *pAge = &age;

    double gpa = 3.8;
    double *pGpa = &gpa;

    string name = "Me";
    string *pName = &name;

    // dereferencing a pointer
    // which is grabbing the value at that memory address
    cout << *pAge;

    return 0;
}
