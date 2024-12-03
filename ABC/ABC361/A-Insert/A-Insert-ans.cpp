#include<bits/stdc++.h>
using namespace std;

int main(void)
{
  int N, K, X;
  cin >> N >> K >> X;

  for(int i = 0; i < N; i++)
  {
    int a;
    cin >> a;

    if(i != 0) 
    {
        cout << " ";
    }

    cout << a;

    if(i == (K-1))
    {
        cout << " " << X;
    }
  }

  cout << "\n";

  return 0;
}
