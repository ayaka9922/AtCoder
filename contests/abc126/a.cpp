#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int n, k;
  string s;
  cin >> n >> k >> s;
  if (s[k - 1] == 'A') {
    s[k - 1] = 'a';
  } else if (s[k - 1] == 'B') {
    s[k - 1] = 'b';
  } else if (s[k - 1] == 'C') {
    s[k - 1] = 'c';
  }
  cout << s << endl;
  return 0;
}