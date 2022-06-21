#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);

  string str; cin >> str;
  vector<int> num;
  for(int i = 0; i < str.length(); i++){
    if(i%2 == 0) num.push_back(str[i]);
  }
  sort(num.begin(), num.end());
  for(int i = 0; i < num.size(); i++){
    cout << (char) num[i];
    if(i != num.size() - 1) cout << "+";
  }
  return 0;
}