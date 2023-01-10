#include <iostream>
using namespace std;

int main()
{
    system("chcp 65001");

    int num = 100;
    const int *num2 = &num;
    int *num3;
    num3 = const_cast<int *>(num2); // 去除 num2 的常量性赋给 num3
    cout << &num << "," << num << endl;
    cout << num2 << "," << *num2 << endl;
    cout << num3 << "," << *num3 << endl;

    system("pause");
    return 0;
}