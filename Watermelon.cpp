#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);

  int n; cin >> n;
  for(int i = n -1; i >= 1; i--){
    if(i%2 == 0 and (n-i)%2 == 0){
      cout << "YES";
      return 0;
    }
  } 
  cout << "NO";
  return 0;
}