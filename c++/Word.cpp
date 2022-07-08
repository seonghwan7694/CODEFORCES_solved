#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);

  string str; cin >> str;
  int upper_case = 0, lower_case = 0;
  for(int i = 0; i < str.length(); i++){
    if('a' <= str[i] and str[i] <= 'z') lower_case++;
    else upper_case++;
  }
  if(lower_case >= upper_case){ // 소문자 변환
    for(int i = 0; i < str.length(); i++){
      if('a' <= str[i] and str[i] <= 'z') cout << str[i];
      else cout << (char) (str[i] - 'A' + 'a');
    }
  }else{ // 대문자 변환
    for(int i = 0; i < str.length(); i++){
      if('a' <= str[i] and str[i] <= 'z') cout << (char) (str[i] - 'a' + 'A');
      else cout << str[i];
    }
  }
  return 0;
}