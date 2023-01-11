#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string name;
    int age;
    // 输入：空格、TAB、ENTER 作为分隔符
    cin >> name >> age;
    cout << "Hi! My name is " << name << ".\nI am " << age << " years old." << endl;
    // system("pause");
    return 0;
}