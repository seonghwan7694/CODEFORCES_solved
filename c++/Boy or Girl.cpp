#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);

  unordered_set<char> s;
  string str; cin >> str;
  for(auto ch : str){
    s.insert(ch);
  }
  if(s.size() % 2 == 0) cout << "CHAT WITH HER!";
  else cout << "IGNORE HIM!";

  return 0;
}