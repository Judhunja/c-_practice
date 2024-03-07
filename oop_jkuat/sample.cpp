#include <iostream>

using namespace std;

class Sample
{
    int a;
    int b;
public:
    void setValue()
    {
        cout << "Enter first number: ";
        cin >> a;
        cout << "Enter second number: ";
        cin >> b;
    }
    friend float mean(Sample);
};

float mean(Sample x)
{
    return float((x.a + x.b) / 2.0);
}

int main()
{
    Sample s;
    s.setValue();
    cout << "The average is " << mean(s) << endl;
    return (0);
}
