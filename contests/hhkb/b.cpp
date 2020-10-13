#include <bits/stdc++.h>
using namespace std;

int main() {
  int h, w, cnt = 0;
  cin >> h >> w;

  vector<string> s(h);

  for (int i = 0; i < h; i++){
    cin >> s.at(i);
  }

  // cout << s[1][1];

  //横向き
  for (int i = 0; i < h ; i++){
    for (int j = 0; j < w - 1 ; j++){
      if(s[i][j] == '.' && s[i][j + 1] == '.' ){
      	cnt++;
      }
    }
  }
  //縦向き
  for (int i = 0; i < h - 1 ; i++){
    for (int j = 0; j < w ; j++){
      if(s[i][j] == '.' && s[i + 1][j] == '.' ){
      	cnt++;
      }
    }
  }
  cout << cnt;


}
