#include <iostream>
#include <typeinfo>

using namespace std;

int main()
{
    int a[5][3];
    double b[4][2][3];

    cout << "配列aの型：" << typeid(a).name()    << '\n';
    cout << "aの要素型：" << typeid(a[0]).name() << '\n';
    cout << "配列bの型：" << typeid(b).name()    << '\n';
    cout << "bの要素型：" << typeid(b[0]).name() << '\n';
}
