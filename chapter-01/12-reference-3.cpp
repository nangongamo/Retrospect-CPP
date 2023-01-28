#include <iostream>
using namespace std;

int x = 1;
int y = 2;

int &refVal(int &val)
{
    return val;
}

int main()
{
    cout << "x=" << x << ", y=" << y << endl;

    refVal(x) = 100;
    cout << "x=" << x << ", y=" << y << endl;

    refVal(y) = 200;
    cout << "x=" << x << ", y=" << y << endl;

    return 0;
}