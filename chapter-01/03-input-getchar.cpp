#include <iostream>
using namespace std;

int main()
{
    /*以回车键作为结束标志*/

    char ch1 = getchar();
    rewind(stdin); // 清理输入缓冲区中的数据
    // getchar(); // 或者再次调用 getchar()，消耗缓冲区中的ENTER回车换行符
    char ch2 = getchar();
    cout << ch1 << "," << ch2 << endl;
    // system("pause");
    return 0;
}