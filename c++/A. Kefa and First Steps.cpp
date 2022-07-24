#include <bits/stdc++.h>
using namespace std;

int a[101010], n, dp[101010]; // dp[i] = val; : a[1] 부터 a[i] 까지 최대 단조 증가 수열으 크기는 val입니다

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);

  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> a[i];
  }
  fill(dp, dp + 101010, 1);
  for(int i = 1; i < n; i++){
    if(a[i-1] <= a[i]) dp[i] = dp[i-1] + 1;
  }
  cout << *max_element(dp, dp + 101010) << "\n";
  return 0;
}