#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);
  string str;
  cin >> str;
  bool flag = false;
  for(int i = 0; i < str.length(); i++){
    int cnt = 0;
    for(int j = i; j < str.length(); j++){
      if(str[i] == str[j]){
        cnt++;
      }else{
        break;
      }
      if(cnt >= 7){
        flag = true;
        break;
      }
    }
  }
  if(flag){
    cout << "YES";
  }else{
    cout << "NO";
  }

  return 0;
}