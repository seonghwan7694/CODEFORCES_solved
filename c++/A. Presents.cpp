#include <bits/stdc++.h>
using namespace std;
unordered_map<int, int> m2;
int n;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);

  cin >> n;
  for(int i = 1, tmp; i <= n; i++){
    cin >> tmp;
    m2[tmp] = i; // m2[2] = 1
  }
  for(int i = 1; i <= n; i++){
    cout << m2[i] << " ";
  }
  return 0;
}