#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cout.tie(0); cin.tie(0);
  string a, b;
  cin >> a >> b;
  reverse(a.begin(), a.end());
  if(a == b){
    cout << "YES" << "\n";
  }else{
    cout << "NO" << "\n";
  }


  return 0;
}