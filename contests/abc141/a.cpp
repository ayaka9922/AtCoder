#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  string s;
  cin >> s;
  string ans;
  if (s == "Sunny")
    s = "Cloudy";
  else if (s == "Cloudy")
    s = "Rainy";
  else if (s == "Rainy")
    s = "Sunny";
  cout << s << endl;
  return 0;
}
