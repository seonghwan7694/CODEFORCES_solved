#include <bits/stdc++.h>
using namespace std;

int n;
string str;
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);

  cin >> n >> str;
  int a_cnt = 0, d_cnt = 0;
  for(int i = 0; i < str.length(); i++){
    if(str[i] == 'D'){
      d_cnt++;
    }else{
      a_cnt++;
    }
  }

  if(a_cnt > d_cnt){
    cout << "Anton" << "\n";
  }else if(a_cnt == d_cnt){
    cout << "Friendship" << "\n";
  }else{
    cout << "Danik" << "\n";
  }
  return 0;
}