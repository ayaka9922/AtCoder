#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int n;
  cin >> n;
  vector<string> s(n);

  for (int i = 0; i < n; i++){
    cin >> s[i];
  }
  int a=0, b=0, c=0, d=0;
  for (int i = 0; i < n; i++){
    if(s[i]=="AC") a++;
    if(s[i]=="WA") b++;
    if(s[i]=="TLE") c++;
    if(s[i]=="RE") d++;
  }

  cout << "AC x " << a << endl;
  cout << "WA x " << b << endl;
  cout << "TLE x " << c << endl;
  cout << "RE x " << d << endl;

  return 0;
}