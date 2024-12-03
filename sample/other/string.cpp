#include <bits/stdc++.h>
using namespace std;

/*
a[0]とa.at(0)の違いは，例外を返すかどうか．
ただしアクセスチェックをa.at(0)では行われるためオーバーヘッドがあるが，
安全性は担保される．a[0]のほうが高速．
*/

int main(void)
{
    string a = "Hello";

    cout << a.at(100) << endl;
    cout << a[0] << endl;

    try {
        cout << a.at(10) << endl;
    } catch (const out_of_range& e) {
        cout << "例外発生: " << e.what() << endl;
    }


    return 0;
}