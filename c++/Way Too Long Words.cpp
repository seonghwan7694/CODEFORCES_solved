#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);

  int test_case; cin >> test_case;
  
  while(test_case--){
    string str; cin >> str;
    if(str.length() <= 10){
      cout << str << "\n";
      continue;
    }
    cout << str.front() << str.length() - 2 << str.back() << "\n";
  }
  return 0;
}