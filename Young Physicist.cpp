#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);
  int n; cin >> n;
  int x = 0, y = 0, z = 0;

  for(int i = 0; i < n; i++){
    int a, b, c;
    cin >> a >> b >> c;
    x += a; y += b; z += c;
  }
  if(!x and !y and !z) cout << "YES" << "\n";
  else cout << "NO" << "\n";
  return 0;
}