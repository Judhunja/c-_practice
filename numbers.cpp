#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int num = 5;
    double dnum = 5.5;
    // short syntax
    num /= 2;
    cout << num << endl;
    cout << 5 * 4 << endl;
    cout << 10 % 3 << endl;

    // 2^5
    cout << pow(2, 5) << endl;
    // square root = 6
    cout << sqrt(36) << endl;
    // round = 4
    cout << round(4.3) << endl;
    // ceiling = 5
    cout << ceil(4.1) << endl;
    // floor = 7
    cout << floor(7.8) << endl;
    // max of two numbers
    cout << fmax(3, 10) << endl;
    // min of two numbers
    cout << fmin(2, 5) << endl;

    return 0;
}
