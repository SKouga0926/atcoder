#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int ctz(int number)
{
    int Q, R;
    string Answer = "";

    while (true)
    {
        Q = number / 2;
        R = number % 2;

        number = Q;

        if (R == 0) Answer += "0";
        if (R == 1) Answer += "1";

        if (number == 0) break;
    }

    reverse(Answer.begin(), Answer.end());

    int counter = 0;
    int i = 0;

    while (true)
    {
        if (Answer[Answer.size() - 1 - i] == '0') counter++;
        if (Answer[Answer.size() - 1 - i] == '1') break;
        i++;
    }

    return counter;
}

int N;

int main(void)
{
    // 入力
    cin >> N;

    int Answer = ctz(N);
    cout << Answer << endl;
    

    return 0;
}
