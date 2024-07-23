using namespace std;
#include <bits/stdc++.h>

int main(void)
{
    int a, b = 0;
    cin >> a >> b;

    cout << "a = " << a  << " " << "b = " << b << endl;

    cout << "min = " << min(a, b) << endl;
    cout << "max = " << max(a, b) << endl;

    swap(a, b);
    cout << "a = " << a  << " " << "b = " << b << endl;

    vector<int> vec = {1, 3, 5, 2, 7, 6};
    sort(vec.begin(), vec.end());

    for (int num : vec)
    {
        cout << num;
    }

    cout << endl;

    reverse(vec.begin(), vec.end());

    for (int num : vec)
    {
        cout << num;
    }

    return 0;
}
