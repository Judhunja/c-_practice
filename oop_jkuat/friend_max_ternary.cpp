#include <iostream>

using namespace std;

class ABC;
class PQR;

class XYZ
{
    int x;
public:
    void setValue(int i)
    {
        x = i;
    }
    friend void max(XYZ, ABC, PQR);
};

class ABC
{
    int a;
public:
    void setValue(int i)
    {
        a = i;
    }
    friend void max(XYZ, ABC, PQR);
};

class PQR
{
    int p;
public:
    void setValue(int i)
    {
        p = i;
    }
    friend void max(XYZ, ABC, PQR);
};

void max(XYZ m, ABC n, PQR t)
{
    (m.x > n.a && m.x > t.p) ? cout << m.x << endl : (t.p > m.x && t.p > n.a) ? cout << t.p << endl : (n.a > m.x && n.a > t.p) ? cout << n.a << endl : cout << "All are equal" << endl;
}

int main()
{
    ABC abc;
    abc.setValue(50);
    XYZ xyz;
    xyz.setValue(50);
    PQR pqr;
    pqr.setValue(50);
    max(xyz, abc, pqr);
}

