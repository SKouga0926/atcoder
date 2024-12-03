#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int N, A;
    cin >> N;
    cin >> A;

    string op;
    int B = A;

    for (int i = 1; i <= N; i++)
    {
        cin >> op >> B;
        
        if (op == "+")
        {
            A = A + B;
        }

        if (op == "-")
        {
            A = A - B;
        }

        if (op == "*")
        {
            A = A * B;
        }

        if (op == "/")
        {
            if (B == 0)
            {
                cout << "error" << endl;
                break;
            }

            else 
            {
                A = A / B;
            }   
        }

        cout << i << ":" << A << endl;
    }


    return 0;
}