#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  string s;
  cin >> s;
  if (s[0] == s[1] || s[1] == s[2] || s[2] == s[3])
    cout << "Bad" << endl;
  else
    cout << "Good" << endl;
  return 0;
}