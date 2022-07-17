#include <bits/stdc++.h>
using namespace std;

int a[1010], n, h, ans;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);

  cin >> n >> h;
  for(int i = 1; i <= n; i++){
    cin >> a[i];
    if(a[i] % h == 0) ans += a[i] / h;
    else ans += a[i] / h + 1;
  }
  cout << ans;
  return 0;
}