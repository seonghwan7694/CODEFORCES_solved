#include <bits/stdc++.h>
using namespace std;

int n, k, res;
vector<int> score;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);

  cin >> n >> k;
  for(int i = 0, tmp; i < n; i++){
    cin >> tmp;
    if(tmp == 0) res++;
    score.push_back(tmp);
  }
  if(res == n){
    cout << 0;
    return 0;
  }else{
    res = 0;
  }
  sort(score.begin(), score.end(), [](int a, int b) { return a < b; });
  int last = score.back();
  while(k--){
    last = score.back();
    score.pop_back();
    if(last != 0){
      res++;
    }else{
      cout << res;
      return 0;
    }
  }
  for(auto x : score){
    if(x >= last) res++;
  }
  cout << res;
  return 0;
}