#include <bits/stdc++.h>
using namespace std;
const int MAX_SIZE = 100001;
int t, n, dp[MAX_SIZE];

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);

  cin >> t;

  while(t--){
    cin >> n;
    for(int i = 2; i <= n; i++){
      cout << i << " ";
    }
    cout << 1 << "\n";
  }

  return 0;
}