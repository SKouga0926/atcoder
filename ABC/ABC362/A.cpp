using namespace std;
#include <bits/stdc++.h>

int main(void)
{
    int R, G, B;
    cin >> R >> G >> B;

    string C;
    cin >> C;

    int minumum;

    if (C == "Red")
        minumum = min(G, B);

    if (C == "Green")
        minumum = min(R, B);

    if (C == "Blue")
        minumum = min(R, G);

    cout << minumum << endl;

    return 0;
}
