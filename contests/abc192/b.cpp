#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  string s;
  cin >> s;
  int cnt = s.length();
  for (int i = 0; i < s.length(); i++) {
    if (i % 2 == 0 && 'A' <= s[i] && s[i] <= 'Z') {
      cout << "No";
      return 0;
    } else if (i % 2 == 1 && 'a' <= s[i] && s[i] <= 'z') {
      cout << "No";
      return 0;
    }
  }
  cout << "Yes";
  return 0;
}