#include <bits/stdc++.h>
using namespace std;
// 인트 오버플로우 주의
#define ll long long
int tc, n;


void solution(){
  vector<ll> arr;
  cin >> n;
  for(int i = 0, tmp; i < n; i++){
    cin >> tmp;
    arr.push_back(tmp);
  }
  sort(arr.begin(), arr.end());
  int st = 0, en = n - 1;
  for(int i = 0; i < n; i++){
    int cnt = 0;
    if(arr[i] == 0){
      for(int j = i; j < i + 3; j++){
        if(arr[j] == 0) cnt++;
      }
      if(cnt == 3){
        cout << "YES" << "\n";
        return;
      }
    }
  }
  while(st < en){
    auto iter = lower_bound(arr.begin(), arr.end(), arr[st] + arr[en]);
    // arr[st] + arr[en] == 0
    // arr[st] + arr[iter - arr.begin()] == 0
    // arr[st]  + arr[iter - arr.begin()] == 0
    if((!(arr[st] + arr[en]) or !(arr[st] + arr[iter - arr.begin()]) or !(arr[en] + arr[iter - arr.begin()])) and st != iter - arr.begin() and en != iter - arr.begin()){
      cout << st << en << iter - arr.begin() << "\n";
      cout << arr[st] << " " << arr[en] << " " << arr[iter - arr.begin()] << "\n";
      cout << "YES" << "\n";
      return;
    }else if(arr[st] + arr[en] < 0){
      st++;
    }else{
      en--;
    }
  }
  cout << "NO" << "\n";
  return;
}
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  cin >> tc;
  while(tc--){
    solution();
  }

  return 0;
}