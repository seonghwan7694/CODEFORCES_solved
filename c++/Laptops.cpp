#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);
  int N; cin >> N;
  vector<pair<int, int>> v;

  while(N--){
    int a, b; cin >> a >> b;
    v.push_back({a, b});
  }
  sort(v.begin(), v.end());
  for(int i = 0; i < v.size() - 1; i++){
    if(v[i].second > v[i+1].second){
      cout << "Happy Alex";
      return 0;
    }
  }
  cout << "Poor Alex";
  return 0;
}