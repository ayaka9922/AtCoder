#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  string s;
  cin >> s;
  if (s[0] == s[1] && s[1] == s[2]) {
    cout << "Won";
  } else {
    cout << "Lost";
  }
  return 0;
}