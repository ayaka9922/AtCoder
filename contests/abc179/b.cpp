#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, cnt = 0;
  vector<int> d1(100);
  vector<int> d2(100);
  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> d1.at(i) >> d2.at(i);
  }

  for (int i = 0; i < n - 2; i++) {
    if (d1.at(i) == d2.at(i) && d1.at(i + 1) == d2.at(i + 1) && d1.at(i + 2) == d2.at(i + 2)) {
    	cnt = 1;
     	break;
    }
   }

    if (cnt){
      cout << "Yes" << endl;
    }else{
      cout << "No" << endl;
    }
}
