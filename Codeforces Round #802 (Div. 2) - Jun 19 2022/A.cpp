#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define X first
#define Y second
 
int test_case;
// ll board[10001][10001]; // 1-indexed로 처리합니다 ( 문제의 컨벤션을 그대로 )
int N, M;

// 문제 맥시멈 :          500099995000
// 내 맥시멈 :     1883788664
/*
규칙이 있지 않을까?
 
- 가설 1 (BFS)
(1, 1)에서 시작해서 (n, m)으로 가는 게 목표이다.
매 순간 작은 선택을 한다?
구현에 성공했지만 262MB로 주어진 메모리 제한(256)을 넘어섬.

- 가설 2 (그리디)
구현

// 오버플로우 왜 뜨는거지 -> 찾았다;;
*/

/* BFS로 구현한 솔루션
void solution(){
  queue<pair<ll , pair<int, int>>> q;
 
  q.push({board[1][1], {1, 1}}); // {cur_sum, {cur_x, cur_y}}
  while(!q.empty()){
    auto cur = q.front(); q.pop();
    int cur_x = cur.second.X;
    int cur_y = cur.second.Y;
    ll cur_sum = cur.first;
    if(cur_x == N and cur_y == M){
     cout << cur_sum << "\n";
     return;
    }
    vector<pair<ll , pair<int, int>>> nxt_cost;
    if(cur_x + 1 <= N) nxt_cost.push_back({cur_sum + board[cur_x + 1][cur_y],{cur_x + 1, cur_y}});
    if(cur_y + 1 <= M) nxt_cost.push_back({cur_sum + board[cur_x][cur_y + 1], {cur_x, cur_y + 1}});
    if(!nxt_cost.empty()){ // 비어있지 않았으면 최소의 비용을 선택하고 큐에 넣어줌
      q.push(*min_element(nxt_cost.begin(), nxt_cost.end()));
    }
  }
  return;
}
*/

/*
void solution(){
  
  ll tmp[10001][10001] = {0};
  tmp[1][1] = board[1][1];
  int i = 1, j = 1;
    
  while(!tmp[N][M]){
    if( i + 1 <= N and j + 1 <= M){
      if(min(tmp[i][j+1], tmp[i+1][j]) == tmp[i][j+1]){
        tmp[i][j] = tmp[i][j] + board[i][++j]; 
      }else{
        tmp[i][j] = tmp[i][j] + board[++i][j];
      }
    }else if(i + 1 <= N){
      tmp[i][j] += tmp[i][j] + board[++i][j];
    }else if(j + 1 <= M){
      tmp[i][j] += tmp[i][j] + board[i][++j];
    }
  }
  

  // 인덱스 범위 넘어가는거 예외처리..

  
  ll sum = 0, temp;
  while(!tmp[N][M]){
  sum += (temp = min(board[i][j+1], board[i+1][j]));
    if(temp == board[i][j+1]){
      tmp[i][++j] = sum;
    }
    else{
      tmp[++i][j] = sum;
    }
  }
  cout << sum;
}
*/


void solution(){
  ll sum = 1;
  for(int j = 2, i = 1; j <= M; j++){
    sum += (i - 1)*M+j;
  }
  for(int i = 2, j = M; i <= N; i++){
    sum += (i - 1)*M+j;
  }
  cout << sum << "\n";
}
int main(){
  ios::sync_with_stdio(false);
  cout.tie(0); cin.tie(0);
 
  cin >> test_case;
  while(test_case--){
    cin >> N >> M;
    /*
    ll cnt = 1;
    for(int i = 1; i <= N; i++){
      for(int j = 1; j <= M; j++){
        board[i][j] = cnt++;
      }
    }
    */
    solution();
  }
  return 0;
}