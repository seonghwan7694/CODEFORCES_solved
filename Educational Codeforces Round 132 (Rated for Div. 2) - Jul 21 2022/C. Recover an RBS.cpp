#include <bits/stdc++.h>
using namespace std;
 
int K, ans, val;
string str;
vector<int> v;
bool flag;
 
void func(int);
bool check();

void solution(){
  cin >> str;
 
  ans = 0, val = 0;
  flag = false;
  v.clear();
 
  for(int i = 0; i < str.length(); i++){
    if(str[i] == '('){
      val++;
    }else if(str[i] == ')'){
      val--;
    }else{
      v.push_back(i);
    }
  }
  K = v.size();

  if(K > 0) func(0);
  else{
    int cnt = 0;
    for(int i = 0; i < str.length(); i++){
      if(cnt < 0){
        cout << "NO" << "\n";
        return;
      }
      if(str[i] == '(') cnt++;
      else cnt--;
    }
    if(cnt == 0){
      cout << "YES" << "\n";
    }else{
      cout << "NO" << "\n";
    }
    return;
  }


  if(flag or ans == 0){
    cout << "NO" << "\n";
  }else{
    cout << "YES" << "\n";
  }
}

bool check(){
  int cnt = 0;
  for(int i = 0; i < str.length(); i++){
    if(cnt < 0) return false;
    if(str[i] == '('){
      cnt++;
    }else{
      cnt--;
    }
  }
  if(cnt == 0){
    return true;
  }else{
    return false;
  }
}
 
void func(int k){
  if(flag) return;
  if(k == K and val == 0){
    if(check()) ans++;
    if(ans >= 2){
      flag = true;
    }
    return;
  }

  for(int i = k; i < K; i++){
    str[v[i]] = '(';
    val++;
    func(k+1);
    val--;

    str[v[i]] = ')';
    val--;
    func(k+1);
    val++;
  }
}
 
 
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);
 
  int T;
  cin >> T;
  while(T--){
    solution();
  }
 
  return 0;
}