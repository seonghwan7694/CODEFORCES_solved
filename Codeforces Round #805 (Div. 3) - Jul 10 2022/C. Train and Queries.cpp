#include <bits/stdc++.h>
using namespace std;
int tc;
int n, k, tmp, a, b; 
vector<int> v;

void solution(){
  // 시간초과 주의 -> O(nlog n) 동작하는 알고리즘
  // tc는 10^4, 배열 크기는 10^9
  cin >> n >> k;
  int order = 1;
  multimap<int ,int> m1; // {idx, val}
  while(n--){
    cin >> tmp;
    m1.insert({order, tmp});
    order++;
  }
  // a의 시작 < b의 시작
  // a의 시작 < b의 끝
  while(k--){
    cin >> a >> b;
    auto iter1 = m1.find(a);
    auto iter2 = m1.find(b);
    auto iter3 = m1.upper_bound(m1.begin(), m1.end(), b);
    if(iter1 == m1.end() or iter2 == m1.end()){
      cout << "NO" << "\n";
      continue;
    }
    if(iter1->first < iter2->first){
      cout << "YES" << "\n";
    }else{
      if(iter1->first < upper_bound(m1.begin(), m1.end(), b)->first){
        cout << "YES" << "\n";
      }else cout << "NO" << "\n";
    }
  }
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