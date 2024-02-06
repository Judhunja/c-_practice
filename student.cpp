#include <iostream>

using namespace std;

class Student {
    public:
        string name;
        string major;
        double gpa;
        // constructor
        Student(string Name, string Major, double Gpa) {
            name = Name;
            major = Major;
            gpa = Gpa;
        }

        bool hasHonors() {
            if (gpa >= 3.5) {
                return true;
            }
            return false;
        }
};

int main()
{
    Student student1("Jim", "Business", 2.4);
    Student student2("Pam", "Art", 3.6);

    cout << student1.hasHonors() << endl;
    cout << student2.hasHonors() << endl;
    return 0;
}
