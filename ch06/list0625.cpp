#include <iostream>

using namespace std;

int max(int a, int b)
{
    return a > b ? a : b;
}

int max(int a, int b, int c)
{
    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    return max;
}

int main()
{
    int x, y, z;

    cout << "xの値：";
    cin >> x;

    cout << "yの値：";
    cin >> y;

    cout << "xとyの最大値は" << max(x, y) << "です。\n";

    cout << "zの値：";
    cin >> z;

    cout << "x, y, zの最大値は" << max(x, y, z) << "です。\n";
}
