using namespace std;
#include <bits/stdc++.h>

int main(void)
{
    int x_A, y_A;
    int x_B, y_B;
    int x_C, y_C;

    cin >> x_A >> y_A;
    cin >> x_B >> y_B;
    cin >> x_C >> y_C;
    
    double A_B = pow((x_A - x_B), 2) + pow((y_A - y_B), 2);
    double B_C = pow((x_B - x_C), 2) + pow((y_B - y_C), 2);
    double A_C = pow((x_A - x_C), 2) + pow((y_A - y_C), 2);

    if ((A_B) == (B_C + A_C))
    {
        cout << "Yes" << endl;
    }

    else if ((B_C) == (A_B + A_C))
    {
        cout << "Yes" << endl;
    }

    else if ((A_C) == (A_B + B_C))
    {
        cout << "Yes" << endl;
    }

    else 
    {
        cout << "No" << endl;
    }

    return 0;
}
