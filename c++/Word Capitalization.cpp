#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);

  string str; cin >> str;
  if('a' <= str[0] and str[0] <= 'z') str[0] = str[0] - 'a' + 'A';
  cout << str;

  return 0;
}