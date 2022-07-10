#include <bits/stdc++.h>
using namespace std;

int tc;
string str;

int solution(){
  cin >> str;
  int day = 0, cnt = 0;
  bool chr[26] = {0};

  for(int i = 0; i < str.size(); i++){
    if(!chr[str[i] - 'a']){
      chr[str[i] - 'a'] = true;
      cnt++;
      
    }
    if(cnt > 3){
      cnt = 1;
      fill(chr, chr + 26, false);
      chr[str[i] - 'a'] = true;
      day++;
    }
  }
  if(cnt) day++;
  return day;
}
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);

  cin >> tc;
  while(tc--){
    cout << solution() << "\n";
  }

  return 0;
}