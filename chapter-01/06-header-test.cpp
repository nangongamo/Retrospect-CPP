#include <iostream>
#include <cstdlib>
using namespace std;

void sayHi(string name)
{
    cout << "Hi," << name << ". You are the best of the best." << endl;
}

int increase(int num)
{
    return ++num;
}

int myAbs(int num){
    return abs(num);
}