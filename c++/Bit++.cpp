#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);

  int N, res = 0; cin >> N;
  while(N--){
    string cmd; cin >> cmd;
    if(cmd == "++X" or cmd == "X++") res++;
    else res--;
  }
  cout << res;
  return 0;
}