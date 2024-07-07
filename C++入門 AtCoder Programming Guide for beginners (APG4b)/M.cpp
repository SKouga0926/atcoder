#include <bits/stdc++.h>
using namespace std;

int main(void) 
{
    string S;
    cin >> S;

    int size = S.size();
    int value = 1;

    for (int i = 0; i < size; i++)
    {
    if (S.at(i) == '+')
    {
        value = value + 1;
    }

    if (S.at(i) == '-')
    {
        value = value - 1;
    }
    }
  
    cout << value << endl;

    return 0;
}
