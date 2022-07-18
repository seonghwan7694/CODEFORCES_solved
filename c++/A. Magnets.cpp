#include <bits/stdc++.h>
using namespace std;

int n, ans;
string cur, pre;
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);

  cin >> n;
  while(n--){
    cin >> cur;
    if(cur == pre){
      continue;
    }
    pre = cur;
    ans++;
  }
  cout << ans;
  return 0;
}