#include <iostream>

using namespace std;

int main(void)
{
    int a, b;
    cin >> a >> b;

    int product = a * b;

    if (product % 2 == 0)
    {
        cout << "Even";
    }

    else
    {
        cout << "Odd";
    }

    return 0;
}