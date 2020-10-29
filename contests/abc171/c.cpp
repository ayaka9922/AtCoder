#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ll n;
  cin >> n;
  string ans;

  while(n){
    --n;
    ans += (char)(97 + n % 26);
    n /= 26;
  }
  reverse(ans.begin(),ans.end());

  cout << ans << endl;
  return 0;
}