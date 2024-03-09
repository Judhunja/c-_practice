#include <iostream>
#include <cmath>

using namespace std;


class CRectangle
{
    int length, width;

public:
    void setValues(int, int);
    int getArea();
    int getPerimeter();
    float diagonal();
};

void CRectangle::setValues(int a, int b)
{
    length = a;
    width = b;
}

int CRectangle::getArea()
{
    return length * width;
}

int CRectangle::getPerimeter()
{
    return 2 * (length + width);
}

float CRectangle::diagonal()
{
    return float(sqrtf(pow(length, 2) + pow(width, 2)));
}

int main()
{
    CRectangle rect1, rect2;
    rect1.setValues(4, 5);
    rect2.setValues(6, 6);

    cout << "Area 1: " << rect1.getArea() << endl;
    cout << "Perimeter 1: " << rect1.getPerimeter() << endl;
    cout << "Diagonal 1: " << rect1.diagonal() << endl;
    cout << "Area 2: " << rect2.getArea() << endl;
    cout << "Perimeter 2: " << rect2.getPerimeter() << endl;
    cout << "Diagonal 3: " << rect2.diagonal() << endl;
    return (0);
}
