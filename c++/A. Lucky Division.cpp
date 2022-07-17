#include <bits/stdc++.h>
using namespace std;

int n;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);

  cin >> n;
  if(n % 4 == 0 or n % 7 == 0 or n % 44 == 0 or n % 47 == 0 or n % 77 == 0){
    cout << "YES" << "\n";
    return 0;
  }
  while(n){
    int tmp = n % 10;
    n /= 10;
    if(tmp != 4 and tmp != 7){
      cout << "NO" << "\n";
      return 0;
    }
  }
  cout << "YES" << "\n";
  return 0;
}