#include <iostream>

using namespace std;


int squared(int i)
{
    return i * i;
}

int cubed(int i)
{
    return i * i * i;
}

int main()
{
    for (int k = 5; k <= 100; k += 5)
    {
        cout << k << ", Square: " << squared(k) << ", Cube: " << cubed(k) << endl;
    }
    return(0);
}
