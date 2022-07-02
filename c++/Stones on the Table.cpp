#include <bits/stdc++.h>
using namespace std;

int N, ans;
string str;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);

  cin >> N >> str;
  for(int i = 0; i < N - 1; i++){
    if(str[i] == str[i+1]) ans++;
  }
  cout << ans;

  return 0;
}