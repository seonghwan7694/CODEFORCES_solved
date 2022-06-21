#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);

  string tmp; cin >> tmp;
  int cnt = 0;
  for(int i = 0, prev_i = -1; i < tmp.length(); i++){
    if(cnt == 0 and tmp[i] == 'h' and prev_i < i){ cnt++; prev_i = i; }
    if(cnt == 1 and tmp[i] == 'e' and prev_i < i){ cnt++; prev_i = i; }
    if(cnt == 2 and tmp[i] == 'l' and prev_i < i){ cnt++; prev_i = i; }
    if(cnt == 3 and tmp[i] == 'l' and prev_i < i){ cnt++; prev_i = i; }
    if(cnt == 4 and tmp[i] == 'o' and prev_i < i){ cnt++; prev_i = i; break; }
  }
  if(cnt == 5){
    cout << "YES" << "\n";
  }else{
    cout << "NO" << "\n";
  }

  return 0;
}