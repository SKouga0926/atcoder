#include <bits/stdc++.h>
using namespace std;

/*
cinは空白を入力で入れてしまうと，空白直前までの文字列までになってしまうため，
getlineで行単位入力をする必要がある．
*/

int main() {
  string s, t;
  getline(cin, s); // 変数sで入力を一行受け取る
  getline(cin, t); // 変数tで入力を一行受け取る

  cout << "一行目 " << s << endl;
  cout << "二行目 " << t << endl;

  string a;
  cin >> a;
  cout << a << endl;
}
