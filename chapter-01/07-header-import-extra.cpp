#include <iostream>
#include "06-header-test.cpp"
// #include "E:\code\Retrospect-CPlusPlus\chapter-01\06-header-test.cpp"

using namespace std;

/*
<>：先在系统目录中寻找头文件，然后再到当前目录下找；
""：先在当前目录中寻找头文件，然后再到系统目录中找；
*/

int main()
{
    string name = "Zhangsan";
    sayHi(name);

    int num1;
    int num2;
    num1 = -100;

    num2 = myAbs(num1);

    int num3 = increase(num2);

    cout << "The num1 is " << num1 << endl;
    cout << "The num2 is " << num2 << endl;
    cout << "The num3 is " << num3 << endl;
    cout << endl;

    system("pause");
    return 0;
}