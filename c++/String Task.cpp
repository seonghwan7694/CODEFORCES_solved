#include <bits/stdc++.h>
using namespace std;
bool vowel[500];
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);
  string str; cin >> str;

  vowel['A'] = vowel['a'] = true;
  vowel['O'] = vowel['o'] = true;
  vowel['Y'] = vowel['y'] = true;
  vowel['E'] = vowel['e'] = true;
  vowel['U'] = vowel['u'] = true;
  vowel['I'] = vowel['i'] = true;

  for(int i = 0; i < str.length(); i++){
    if(vowel[str[i]]) continue;
    else{
      if('a' <= str[i] and str[i] <= 'z') cout << "." << str[i];
      else{
        cout << "." << (char) (str[i] - 'A' + 'a');
      }
    }
  }

  return 0;
}