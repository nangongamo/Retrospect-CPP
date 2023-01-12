#include <iostream>
using namespace std;

void SwapVal(int num1, int num2)
{
    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;

    cout << "SwapVal: num1=" << num1 << ", num2=" << num2 << endl;
    return;
}

void SwapRef(int &num1, int &num2)
{
    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;

    cout << "SwapRef: num1=" << num1 << ", num2=" << num2 << endl;
    return;
}

int main()
{
    int n1 = 168;
    int n2 = 188;
    cout << "Initial: num1=" << n1 << ", num2=" << n2 << endl;

    SwapRef(n1, n2);
    SwapVal(n1, n2);
    cout << "Initial: num1=" << n1 << ", num2=" << n2 << endl;

    return 0;
}