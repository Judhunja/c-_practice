// Overload ++ when used as prefix and postfix

#include <iostream>

using namespace std;


class Count {
private:
    int value;

public:

    // Constructor to initialize count to 5
    //Count() : value(5) {}

    void setValue()
    {
        value = 5;
    }
    // Overload ++ when used as prefix
    // using Count as return type so that we can store the value inside an object
    Count operator ++ ()
    {
        ++value;
        return *this;
    }

    // Overload ++ when used as postfix
    void operator ++ (int)
    {
        value++;
    }

    void display()
    {
        cout << "Count: " << value << endl;
    }
};

int main() {
    Count count1, result;
    count1.setValue();
    /* Call the "Count operator ++ ()" function
        * and store the result in a variable
        */
    result = ++count1;
    result.display();
    count1.display();
    // Call the "Count operator ++ (int)" function
    count1++;
    count1.display();
    return (0);
}
