#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;

  if (a == b + c + d || b == a + c + d || c == b + a + d || d == b + c + a){
  cout << "Yes" << endl;
  }else if (a + b == c + d || a + c == b + d || a + d == b + c ){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
}
