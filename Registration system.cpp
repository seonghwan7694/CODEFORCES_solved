#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);

  // 사용자의 이름 : 쓰인 횟수
  
  int n; cin >> n;
  unordered_map<string, int> um;
  while(n--){
    string name; cin >> name;
    if(um.find(name) == um.end()){
      um.insert({name, 0});
      cout << "OK" << "\n";
    }else{
      um[name]++;
      cout << name << um[name] << "\n";
    }
  }

  return 0;
}