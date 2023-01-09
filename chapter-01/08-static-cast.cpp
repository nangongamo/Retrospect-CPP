#include <iostream>
using namespace std;

int main()
{
    system("chcp 65001");

    int i = 0;
    double d = 3.14;
    // static_cast<类型名>(表达式);
    i = static_cast<int>(d);
    // static_cast 可以省略
    int i2 = (int)d; // 旧的写法
    int i3 = int(d); // 新的写法
    int i4 = d;      // 自动类型转换
    cout << "d=" << d << endl;
    cout << "类型转换后：" << endl;
    cout << "i=" << i << "\ni2=" << i2 << "\ni3=" << i3 << "\ni4=" << i4 << endl;

    system("pause");
    return 0;
}