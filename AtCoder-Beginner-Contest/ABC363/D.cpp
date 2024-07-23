using namespace std;
#include <bits/stdc++.h>

bool isPalindrome(string str)
{
    int left_ptr = 0;
    int right_ptr = str.length() - 1;
 
    while (left_ptr < right_ptr)
    {
        
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
    string S;

    int N;
    cin >> N;

    int PalindromeCount = 0;
    int i = 0;

    while(true)
    {
        S = std::to_string(i);

        if (isPalindrome(S))
        {
            PalindromeCount++;
        }

        if (PalindromeCount == N)
        {
            cout << i << endl;
            break;
        }

        i++;

    }

    return 0;
}
