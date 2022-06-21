#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);

  ll n, m, k; cin >> n >> m >> k;
  if(k == 1){
    cout << n * m;
    return 0;
  }
  ll res1 = 0, res2 = 0;
  res1 = n/k; if(n%k > 0) res1++;
  res2 = m/k; if(m%k > 0) res2++;
  cout << res1*res2;
  return 0;
}