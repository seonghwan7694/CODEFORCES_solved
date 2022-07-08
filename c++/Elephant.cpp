#include <bits/stdc++.h>
using namespace std;

int dx[5] = {-1, -2, -3, -4, -5};
bool visited[1010101];
int x;
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);
  cin >> x;
  visited[x] = true;
  queue<pair<int, int>> q; q.push({x, 0});
  while(!q.empty()){
    auto cur = q.front(); q.pop();
    if(cur.first == 0){
      cout << cur.second;
      return 0;
    }
    for(int dir = 0; dir < 5; dir++){
      int nx = cur.first + dx[dir];
      if(nx < 0) continue;
      if(!visited[nx]){
        visited[nx] = true;
        q.push({nx, cur.second + 1});
      }
    }
  }
  return 0;
}