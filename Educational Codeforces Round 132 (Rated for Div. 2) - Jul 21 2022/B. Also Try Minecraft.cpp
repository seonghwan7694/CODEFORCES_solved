#include <bits/stdc++.h>
using namespace std;

long long n, m;
long long a[101010], b[101010], c[101010];

void solution(){
  long long s, t;
  cin >> s >> t;
  if(s < t){ // t가 큼 -> b[t] 가 더 누적된 값임
    cout << b[t] - b[s] << "\n";
  }

  if(s > t){ // s가 큼 -> c[t] 가 더 누적된 값임
    cout << c[t] - c[s] << "\n";
  }
  return;
} 
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);

  cin >> n >> m;
  for(int i = 1; i <= n; i++){
    cin >> a[i];
  }

  for(int i = 2; i <= 101000; i++){ // s -> t
    if(a[i-1] > a[i]){ // 이전 것이 더 크다면...
      b[i] = a[i-1] - a[i] + b[i-1];
    }else{
      b[i] = b[i-1];
    }
  }

  for(int i = 101000; i >= 0; i--){
    if(a[i] < a[i+1]){
      c[i] = c[i+1] + a[i+1] - a[i];
    }else{
      c[i] = c[i+1];
    }
  }
  
  while(m--){
    solution();
  }


  return 0;
}