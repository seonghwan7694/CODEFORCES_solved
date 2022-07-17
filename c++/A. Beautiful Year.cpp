#include <bits/stdc++.h>
using namespace std;

int y;
bool num[11], flag;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);

  cin >> y;
  for(int i = y + 1;; i++){
    fill(num, num + 11, false);
    flag = false;
    stringstream ss;
    ss << i;
    string str = ss.str();
    for(auto ch : str){
      if(num[ch - '0']){
        flag = true;
      }
      num[ch - '0'] = true;
    }
    if(!flag){
      cout << i;
      return 0;
    }
  }



  return 0;
}