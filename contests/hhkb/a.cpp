#include <bits/stdc++.h>
using namespace std;

int main() {
  char s, t;
  cin >> s >> t;

  if (s == 'Y'){
    if (t == 'a'){
      cout << 'A' << endl;
    }else if (t == 'b'){
      cout << 'B' << endl;
    }else if (t == 'c'){
      cout << 'C' << endl;
    }
  } else if (s == 'N'){
    cout << t << endl;
  }

}
