#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    short s1;
    int i1;
    long l1;
    float f1;
    double d1;
    bool b1 = true;
    char c1;
    char c2[20];
    string str = "ABCDEFGHIJKLMN";

    system("chcp 65001"); // 解决 console 乱码；或使用 SetConsoleOutputCP(CP_UTF8)，但需要头部引入 Windows.h

    b1 = false;
    cout << "b1的真假值：" << b1 << endl;
    cout << "str的值：" << str << endl;
    cout << endl;

    cout << "请分别各输入一个 short、int、long、float、double、char：" << endl;
    cin >> s1 >> i1 >> l1 >> f1 >> d1 >> c1;
    cout << "short: " << s1 << "\t"
         << "int: " << i1 << "\t"
         << "\tlong：" << l1 << "\t\n"
         << "float：" << f1 << "\n"
         << "double：" << d1 << "\n"
         << "\nchar：" << c1 << endl
         << endl;

    cout << "请输入一组字符，长度不超过20：" << endl;
    cin >> c2;
    cout << "字符数组：" << c2 << endl;

    system("pause");
    return 0;
}