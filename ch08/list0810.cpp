#include <iostream>

using namespace std;

int main()
{
    const char* p = "ABC";

    cout << "p = \"" << p << "\"\n";

    p = "XYZ";

    cout << "p = \"" << p << "\"\n";
}
