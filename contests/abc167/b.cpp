#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int a, b, c, k;
  cin >> a >> b >> c >> k;

  int ans = 0;
  if(a >= k){
    ans = k;
    cout << ans << endl;
    return 0;
  }else if(a+b >= k){
    ans = a;
    cout << ans << endl;
    return 0;
  }else{
    ans = a;
    k = k - a - b;
    ans -= k;
    cout << ans << endl;
    return 0;
  }

  return 0;
}