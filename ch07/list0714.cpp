#include <iostream>

using namespace std;

int seq_search(int* a, int n, int key)
{
    for (int i = 0; i < n; i++)
        if (*a++ == key)
            return i;
    return -1;
}

int main()
{
    int key, idx;
    int x[7];
    int x_size = sizeof(x) / sizeof(x[0]);

    for (int i = 0; i < x_size; i++) {
        cout << "x[" << i << "]：";
        cin >> x[i];
    }
    cout << "探す値は：";
    cin >> key;

    if ((idx = seq_search(x, x_size, key)) != -1)
        cout << "その値をもつ要素はx[" << idx << "]です。\n";
    else
        cout << "見つかりませんでした。\n";
}
