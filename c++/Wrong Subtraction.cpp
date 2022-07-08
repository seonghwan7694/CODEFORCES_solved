#include <bits/stdc++.h>
using namespace std;

int n, k;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);
  cin >> n >> k;
  while(k--){
    if(n % 10 == 0){
      n /= 10;
    }else{
      n--;
    }
  }
  cout << n;

  return 0;
}