#include <iostream>

using namespace std;

void initialize();
void gen_no();
int judge(int cand);
int input();
bool confirm_retry();

int max_no = 9;

int main()
{
    initialize();
    cout << "数当てゲーム開始！\n";

    do {
        gen_no();
        int hantei;
        do {
            hantei = judge(input());
            if (hantei == 1)
                cout << "\aもっと小さいですよ。\n";
            else if (hantei == 2)
                cout << "\aもっと大きいですよ。\n";
        } while (hantei != 0);
        cout << "正解です。\n";
    } while (confirm_retry());
}
