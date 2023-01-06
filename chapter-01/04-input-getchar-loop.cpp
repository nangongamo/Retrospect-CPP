#include <iostream>
using namespace std;

/*将输入内容中的小写字母转变为大写的字母*/

int main()
{
    int ch;
    int inc = 0;
    while ((ch = getchar()) != EOF)
    {
        if (ch >= 97 && ch <= 122)
            ch = ch - 32;
        putchar(ch);
    }
    cout << endl;
    return 0;
}