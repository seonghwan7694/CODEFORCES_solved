#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cout.tie(0); cin.tie(0);

  int n, t; cin >> n >> t;
  string tmp; cin >> tmp;
  while(t--){
    for(int i = 0; i < n - 1; i++){
      if(tmp[i] == 'B' and tmp[i+1] == 'G'){
        swap(tmp[i], tmp[i+1]);
        i++;
      }
    }
  }
  cout << tmp << "\n";


  return 0;
}