#include <bits/stdc++.h>
using namespace std;

int T;

void solution(){
  int x, a[4];
  cin >> x >> a[1] >> a[2] >> a[3];
  int tmp = a[x];
  if(tmp == 0){
    cout << "NO" << "\n";
    return;
  }
  tmp = a[tmp];
  if(tmp == 0){
    cout << "NO" << "\n";
    return;
  }
  tmp = a[tmp];
  if(tmp == 0){
    cout << "YES" << "\n";
    return;
  }else{
    cout << "NO" << "\n";
    return;
  }
  return;
}

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);

  cin >> T;
  while(T--){
    solution();
  }


  return 0;
}