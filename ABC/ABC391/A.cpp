#include <bits/stdc++.h>
using namespace std;
template<typename T> bool chmin(T& a, T b){if(a > b){a = b; return true;} return false;}
template<typename T> bool chmax(T& a, T b){if(a < b){a = b; return true;} return false;}

typedef long long ll;

int main(void)
{
    string D;
    cin >> D;

    if (D == "N") {
        cout << "S" << endl;
    }

    else if (D == "E") {
        cout << "W" << endl;
    }

    else if (D == "W") {
        cout << "E" << endl;
    }

    else if (D == "S") {
        cout << "N" << endl;
    }

    else if (D == "NE") {
        cout << "SW" << endl;
    }

    else if (D == "NW") {
        cout << "SE" << endl;
    }

    else if (D == "SE") {
        cout << "NW" << endl;
    }

    else if (D == "SW") {
        cout << "NE" << endl;
    }



    return 0;
}
