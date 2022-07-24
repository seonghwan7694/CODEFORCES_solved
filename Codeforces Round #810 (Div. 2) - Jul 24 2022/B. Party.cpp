#include <bits/stdc++.h>
using namespace std;

int t, n, m, a[10001], x, y, ans;
bool attended[10001];
vector<pair<int, int>> v;

void func(int k, int sum){
  if(k == n){
    int cake = 0;
    for(auto x : v){
      if(attended[x.first - 1] and attended[x.second - 1]) cake++;
    }
    if(cake % 2 == 1) return;

    if(ans > sum){
      ans = sum;
    }
    return;
  }

  attended[k] = false;
  func(k+1, sum + a[k]);
  attended[k] = true;

  attended[k] = true;
  func(k+1, sum);
  attended[k] = false;
  return;
}
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);

  cin >> t;
  while(t--){
    fill(attended, attended + 10001, false);
    v.clear();
    ans = 987654321;

    cin >> n >> m;
    for(int i = 0; i < n; i++){
      cin >> a[i];
    }

    while(m--){
      cin >> x >> y;
      v.push_back({x, y});
    }
    func(0, 0);
    cout << ans << "\n";
  }

  
  return 0;
}