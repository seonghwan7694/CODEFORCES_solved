#include <bits/stdc++.h>
using namespace std;

int ans, res;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);

  int N;
  cin >> N;
  vector<pair<int ,int >> v;
  while(N--){
    int a, b;
    cin >> a >> b;
    v.push_back({a, b});
  }
  
  for(int i = 0; i < v.size(); i++){
    res += v[i].second;
    ans = max(ans, res);
    res -= v[i+1].first;
  }

  cout << ans << "\n";
  return 0;
}