using namespace std;
#include <bits/stdc++.h>

typedef long long ll;

int main(void)
{
    int N;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; i++) cin >> A.at(i);   

    int answer = 0;

    while(true)
    {
        // sort
        sort(A.begin(), A.end(), greater());

        if (A.at(0) == 0 || A.at(1) == 0) {
            break;
        }

        A.at(0) -= 1;
        A.at(1) -= 1;
        answer++;
    }

    cout << answer << endl;

    return 0;
}
