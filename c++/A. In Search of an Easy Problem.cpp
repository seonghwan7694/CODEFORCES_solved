#include <bits/stdc++.h>
using namespace std;

int n;
int tmp; // 0 : easy, 1 : hard
bool flag;
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);

  cin >> n;
  while(n--){
    cin >> tmp;
    if(tmp) flag = true;
  }
  if(flag) cout << "HARD" << "\n";
  else cout << "EASY" << "\n";

  return 0;
}