#include <iostream>

using namespace std;

class Sample
{
int a, int b;
public:
void setValue(int i, int j)
{
    cout << "Enter first number: \n";
    cin >> a;
    cout << "Enter second number: \n";
    cin >> b;
}
friend float sample(x, y);
};

float sample(Sample x, Sample y)
{
    return float((x.a + y.b) / 2);
}

int main()
{
    Sample sample;
