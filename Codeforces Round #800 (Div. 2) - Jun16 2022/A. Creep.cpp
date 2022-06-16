#include <bits/stdc++.h>
using namespace std;
#define INF 0x7fffffff;

int test_case;
int zero, one;

int S_creepy(string str){
  int dp[202] = {0};
  if(str[0] == '0') dp[0]++;
  else dp[0]--;

  for(int i = 1; i < str.size(); i++){
    if(str[0] == '0') dp[i] = dp[i-1] + 1;
    else dp[i] = dp[i-1] - 1;
  }
  for(int i = 0; i < str.size(); i++){
    dp[i] = abs(dp[i]);
  }
  return *max_element(dp, dp + str.size());
}

int T_creepy(string str){
  int res = 0;

  for(int i = 0; i < str.size(); i++){
    if(str[i] == '0') res++;
    else res--;
  }

  return abs(res);
}
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);
  cin >> test_case;

  while(test_case--){
    cin >> zero >> one;
    int MIN_creepy = INF;
    
    string str, res;
    for(int i = 0; i < zero; i++) str += '0';
    for(int i = 0; i < one; i++) str += '1';
    int s_creepy = S_creepy(str);
    
    do{
      int t_creepy = T_creepy(str);
      if(MIN_creepy > t_creepy and s_creepy >= t_creepy){
        res = str;
        MIN_creepy = t_creepy;
      }
    }while(next_permutation(str.begin(), str.end()));
    cout << res << "\n";
  }

  return 0;
}