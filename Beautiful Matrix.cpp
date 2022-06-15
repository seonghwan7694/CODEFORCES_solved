#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int MAP[5][5], res;
  for(int i = 0; i < 5; i++){
    for(int j = 0; j < 5; j++){
      cin >> MAP[i][j];
      if(MAP[i][j] == 1){
        res = abs(abs(i - 2) + abs(j - 2));
      }
    }
  }
  cout << res;
  return 0;
}