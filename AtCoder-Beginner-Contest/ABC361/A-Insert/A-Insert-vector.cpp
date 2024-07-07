#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int N, K, X;
    cin >> N >> K >> X;

    int A[N];
    vector<int> B;
    
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
        B.push_back(A[i]);
    }

    auto it = B.begin();

    for (int i = 0; i < K; i++)
    {
        ++it;
    }

    B.insert(it, X);

    for (int val : B) 
    {
        std::cout << val << " ";
    }


    return 0;
}