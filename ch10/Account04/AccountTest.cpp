#include <string>
#include <iostream>
#include "Account.h"

using namespace std;

void print_Account(string title, Account* p)
{
    cout << title
         << p->name() << "\" (" << p->no() << ") " << p-> balance() << "円\n";
}

int main()
{
    Account suzuki("鈴木龍一", "123456789", 1000);
    Account takeda("武田浩文", "987654321",  200);

    suzuki.withdraw(200);
    takeda.deposit(100);

    print_Account("■鈴木くんの口座：", &suzuki);

    print_Account("■武田くんの口座：", &takeda);
}
