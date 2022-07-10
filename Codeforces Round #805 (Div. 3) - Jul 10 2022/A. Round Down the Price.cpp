#include <bits/stdc++.h>
using namespace std;

int tc, n;

int solution(){
  cin >> n;
  stringstream ss;
  ss << n;
  string str = ss.str();
  return n - pow(10, str.length() - 1);

}
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);

  cin >> tc;
  while(tc--){
    cout << solution() << "\n";
  }

  return 0;
}