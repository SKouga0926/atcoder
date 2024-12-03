using namespace std;
#include <bits/stdc++.h>

int main(void)
{
    vector<int> data(5);

    for (int i = 0; i < data.size(); i++)
    {
        cin >> data.at(i);
    }    

    int i = 0;
    while(true)
    {

        if (data.at(i) == data.at(i + 1))
        {
            cout << "YES" << endl;
            break;
        }

        if (i + 1 == data.size() - 1)
        {
            cout << "NO" << endl;
            break;
        }

        i++;
    }

    return 0;
}
