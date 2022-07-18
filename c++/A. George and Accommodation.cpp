#include <bits/stdc++.h>
using namespace std;

pair<int, int> a[101];
int n, ans;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  
  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> a[i].first >> a[i].second;
    if(a[i].first + 2 <= a[i].second) ans++;
  }
  cout << ans << "\n";
  return 0;
}