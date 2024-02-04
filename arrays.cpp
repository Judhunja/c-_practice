#include <iostream>

using namespace std;

int main()
{
    // you can also delcare an array without specifying elements
    int luckyNums[] = {4, 8, 15, 16, 36, 56};
    luckyNums[0] = 19;
    cout << luckyNums[0] << endl;

    return 0;
}
