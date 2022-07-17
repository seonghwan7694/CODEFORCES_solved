#include <bits/stdc++.h>
using namespace std;

int n, me, you, ans;
vector<int> a;
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);

  cin >> n;
  a.resize(n);
  for(int i = 0; i < n; i++){
    cin >> a[i];
    you += a[i];
  }
  sort(a.rbegin(), a.rend());
  for(int i = 0; i < n; i++){
    ans++;
    me += a[i];
    you -= a[i];
    if(me > you){
      break;
    }
  }
  cout << ans << "\n";
  return 0;
}