#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  string n;
  cin >> n;
  vector<int> num(n.length());
  int sum = 0, ans = 0;
  for (int i = 0; i < n.length(); i++) {
    num[i] = n[i] - '0';
    sum += num[i];
  }
  if(sum % 3 == 0){
    cout << 0 << endl;
    return 0;
  }
  if(sum % 3 != 0){
    if(sum <= 2){
      cout << -1 << endl;
      return 0;
    }



  return 0;
}