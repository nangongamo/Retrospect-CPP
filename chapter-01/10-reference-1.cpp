#include <iostream>
using namespace std;

int main()
{
    int one = 1;
    int &num = one;
    int *num2 = &num;

    cout << &one << ": " << one << endl;
    cout << &num << ": " << num << endl;
    cout << num2 << ": " << *num2 << " ," << &num2 << endl;

    const int cnum = 168;
    const int &cnum2 = cnum;
    // switch
    int &rn1 = (int &)cnum;
    int &rn2 = (int &)cnum2;

    cout << &rn1 << "," << rn1 << endl;
    cout << &rn2 << "," << rn2 << endl;
}