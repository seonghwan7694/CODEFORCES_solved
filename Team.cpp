#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);

  int N, res = 0; cin >> N;
  while(N--){
    for(int i = 0, cnt = 0, a[3]; i < 3; i++){
      cin >> a[i];
      if(a[i] == 1) cnt++;
      if(cnt >= 2 and i == 2) res++;
    }
  }
  cout << res;
  return 0;
}