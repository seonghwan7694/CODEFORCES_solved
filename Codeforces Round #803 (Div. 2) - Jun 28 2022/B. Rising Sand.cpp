#include <bits/stdc++.h>
using namespace std;

int tc, n, k;
vector<int> a;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);

  cin >> tc;
  while(tc--){
    cin >> n >> k;
    for(int i = 0, tmp; i < n; i++){
      cin >> tmp;
      a.push_back(tmp);
    }
    int ans = 0;
    for(int i = 1; i < a.size() - 1; i++){
      if(a[i] > a[i-1] + a[i+1]){
        
      }
    }
    cout << ans << "\n";
  }

  return 0;
}