using namespace std;
#include <bits/stdc++.h>

typedef long long ll;

int main(void)
{
    // 入力
    double X;
    cin >> X;

    string str_X = std::to_string(X);
    
    int i = 0;

    while(true) {

        if (str_X.back() == '0') {
            str_X.pop_back();
        }

        else if (str_X.back() != '0') {
            break;
        }

        else if (str_X.back() == '.') {
            str_X.pop_back();
            break;
        }

        i++;

    }

    if (str_X.back() == '.') {
        str_X.pop_back();
    }

    for (int i = 0; i < str_X.size(); i++) {
        cout << str_X[i];
    }


    return 0;
}
