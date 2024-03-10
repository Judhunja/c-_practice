#include <iostream>

using namespace std;


class Complex
{
    float real;
    float imag;

public:
    void setValues()
    {
        real = 0;
        imag = 0;
    }
    void input()
    {
        cout << "Enter real and imaginary parts: ";
        cin >> real;
        cin >> imag;
    }

    Complex operator + (const Complex& obj)
    {
        Complex temp;
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;
        return temp;
    }

    void display()
    {
        if (imag < 0)
            cout << "Imaginary number: " << real << imag << "i\n";
        else
            cout << "Imaginary number: " << real << "+" << imag << "i\n";
    }
};

int main()
{
    Complex complex1, complex2, result;

    complex1.setValues();
    complex2.setValues();
    result.setValues();

    cout << "Enter first complex number\n";
    complex1.input();

    cout << "Enter second complex number\n";
    complex2.input();

    result = complex1 + complex2;
    result.display();
    return (0);
}
