#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll k, n, w;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);

  cin >> k >> n >> w;
  // k : 첫번째 바나나를 사기위한 비용
  // n : 가지고 있던 돈
  // w : 원하는 바나나 개수

  // 예제 : 17 - 3 - 6 - 9 - 12 = -13
  for(ll i = 1; i <= w; i++){  // (w - 1 + 1)개를 구매
    n -= k*i;
  }
  if(n >= 0) cout << 0 << "\n"; // 돈 안빌려도 됨
  else cout << abs(n) << "\n"; // 돈 빌려야 함

  return 0;
}