#include <bits/stdc++.h>
using namespace std;

// ㅆㅓㅁㄴㅔㅇㅣㄹ ㅋㅡㄱㅣ ㅎㅗㅏㄱㅇㅣㄴ

int test_case;
int board[1010][1010];
int n, m;
int dx[2] = {1, 0};
int dy[2] = {0, 1};
bool flag = false;
/* 큐때문에 메모리 초과 뜨는 것 같음
void solution(){
  queue<pair<int, pair<int, int>>> q; //  {cur_sum, {cur_x, cur_y}};
  while(!q.empty()){
    q.pop();
  }
  q.push({board[0][0], {0, 0}}); // sum = 0, x = 0, y = 0

  while(!q.empty()){
    auto cur = q.front(); q.pop();
    if(cur.second.first == n - 1 and cur.second.second == m - 1 and cur.first == 0){
      cout << "YES" << "\n";
      
      return;
    }
    for(int dir = 0; dir < 2; dir++){
      int n_x = cur.second.first+ dx[dir];
      int n_y = cur.second.second + dy[dir];
      int n_sum = cur.first + board[n_x][n_y];
      if(n_x >= n or n_y >= m) continue;
      q.push({n_sum, {n_x, n_y}});
    }
  }
  cout << "NO" << "\n";
  return;
}
*/


// dfs 잘 못 짜는데.. 하... 이 새낀 시간초과...

/*
void dfs(int sum, int x, int y){
  if(flag) return; // 시간초과 예방 가능? -> 불가능 ~

  if(x == n - 1 and y == m - 1 and sum == 0){
    flag = true;
    return;
  }
  if(x+1 < n) dfs(sum + board[x+1][y], x+1, y);
  if(y+1 < m) dfs(sum + board[x][y+1], x, y+1);
  return;
}

void solution(){
  flag = false;
  dfs(board[0][0], 0, 0);
  if(flag) cout << "YES\n";
  else cout << "NO\n";
}
*/

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);

  cin >> test_case;
  while(test_case--){
    cin >> n >> m;
    for(int i = 0; i < n; i++){
      for(int j = 0; j < m; j++){
        cin >> board[i][j];
      }
    }
    solution();
  }
  return 0;
}