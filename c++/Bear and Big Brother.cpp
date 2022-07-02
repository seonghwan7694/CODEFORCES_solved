#include <bits/stdc++.h>
using namespace std;

int a, b, year;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);

  cin >> a >> b; // a : limak, b : bob
  
  while(a <= b){
    a *= 3; b *= 2;
    year++;
  }
  cout << year;
  return 0;
}