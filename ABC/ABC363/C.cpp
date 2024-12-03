using namespace std;
#include <bits/stdc++.h>
#include <string>

bool isPalindrome(string str)
{
    int left_ptr = 0;
    int right_ptr = str.length() - 1;
 
    while (left_ptr < right_ptr)
    {
        //不一致が発生した場合
        if (str[left_ptr] != str[right_ptr]) {
            return false;
        }
 
        left_ptr++;
        right_ptr--;
    }
 
    return true;
}

int main(void)
{
    int N, K;
    cin >> N >> K;

    string S;
    cin >> S;

    // cout << "N: " << N << ", K: " << K << ", S: " << S << endl;

    sort(S.begin(), S.end());

    do 
    {
        cout << S << endl;

        if (isPalindrome(S))
        {
            
        }

    } while (next_permutation(S.begin(), S.end()));



    return 0;
}
