#include <bits/stdc++.h>
using namespace std;

// 문제를 이해 못해서 못 푸는.... 이제 이해했다...! 아마도?


// 미첼은 h, w를 말해
// 조는 h * w 크기의 하위사각형을 골라. n * m 크기의 사각형 안에 있음을 보장해
// 마지막으로 미첼은 하위사각형 안에 최대 수를 추측해야해

// 미첼은 큰 숫자를 좋아하지 않아서, 하위사각형의 면적을 최대한 작게 만들면서
// "조의 선택에 따라 승리하는 것이 아니라" 승리하는 것을 "항상" "보장"받길 원해.
// 가능한 지역 중 그 넓이가 최소인 지역을 찾아라?

int test_case;
int board[41][41]; // 1_indexed
int n, m, w, h; // h, w는 최대인 값의 위치이다.

#define min_INF -0x7fffffff;
int Max;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);

  cin >> test_case;
  while(test_case--){
    cin >> n >> m;
    Max = min_INF;
    for(int i = 1; i <= n; i++){
      for(int j = 1; j <= m; j++){
        cin >> board[i][j];
        if(Max < board[i][j]){ w = i; h = j; Max = board[i][j]; }
      }
    }
    // cout << w << " " << h << "\n";
    // cout << "tc\n";
    // cout << "w*h : " << w*h << "\n";
    // cout << "w*(m-h+1) : " << w*(m-h+1) << "\n";
    // cout << "(n-w+1)*h : " << (n-w+1)*h << "\n";
    // cout << "(n-w+1)*(m-h+1) : " << (n-w+1)*(m-h+1) << "\n";
    int arr[4] = {w*h, w*(m-h+1), (n-w+1)*h, (n-w+1)*(m-h+1)};
    cout << *max_element(arr, arr + 4) << "\n";
    // 1_indexed..
    // 1 번 구간 x : [1, w] y : [1, h] (w-1+1)*(h-1+1) = w*h
    // 2 번 구간 x : [1, w] y : [h, m] (w-1+1)*(m-h+1) = w*(m-j+1)
    // 3 번 구간 x : [w, n] y : [1, h] (n-w+1)*(h-1+1) = (n-w+1)*h
    // 4 번 구간 x : [w, n] y : [h, m] (n-w+1)*(m-h+1) = (n-w+1)*(m-h+1)
  }
  return 0;
}