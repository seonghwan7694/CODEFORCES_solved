#include <bits/stdc++.h>
using namespace std;
int tc, n;
int arr[101];

int get_XOR(int x){
  int res = 0;
  bool flag = true;
  for(int i = 0; i < n; i++){
    if(i == x) continue;
    if(flag){
      res = arr[i];
      flag = false;
      continue;
    }
    res = res^arr[i];
  }
  return res;
}
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);

  cin >> tc;
  while(tc--){
    cin >> n;
    for(int i = 0; i < n; i++){
      cin >> arr[i]; 
    }
    for(int i = 0; i < n; i++){
      if(arr[i] == get_XOR(i)){
        cout << arr[i] << "\n";
        break;
      }
    }
  }
  return 0;
}
