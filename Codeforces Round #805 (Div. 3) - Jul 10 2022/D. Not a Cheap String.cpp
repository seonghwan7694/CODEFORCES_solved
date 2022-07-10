#include <bits/stdc++.h>
using namespace std;

int tc;

/*

abca : 1 + 2 + 3 + 1 = 7
2
abca : 7
6
codeforces : 93
1
codeforces : 93
10
codeforces : 93
100



*/

int get_score(string str){
  int res = 0;
  for(int i = 0; i < str.length(); i++){
    res += str[i] - 'a' + 1;
  }
  return res;
}

void solution(){
  string w; int p;
  cin >> w >> p;
  int w_score = get_score(w);

  if(w_score <= p){
    cout << w << "\n";
    return;
  }

  // 그리디 : 점수가 높은거 없애면 됨

  priority_queue<pair<int, char>> pq; // {score, chr}
  for(int i = 0; i < w.length(); i++){
    pq.push({w[i] - 'a' + 1, w[i]});
  }
  int tmp[300] = {0};
  while(w_score > p){
    auto cur = pq.top(); pq.pop();
    w_score -= cur.first;
    tmp[cur.second]++;
  }
  for(int i = 0; i < w.length(); i++){
    if(tmp[w[i]] == 0){
      cout << w[i];
    }else{
      tmp[w[i]]--;
    }
  }
  cout << "\n";
  return;
}

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);

  cin >> tc;

  while(tc--){
    solution();
  }

  return 0;
}