#include <stdio.h>
#include <string.h>

char a[101];
char b[101];

int main(){
  scanf("%s", a);
  scanf("%s", b);
  for(int i = 0, a_len = strlen(a); i < a_len; i++){
    if('A' <= a[i] && a[i] <= 'Z') a[i] = (char) a[i] - 'A' + 'a';
  }
  for(int i = 0, b_len = strlen(b); i < b_len; i++){
    if('A' <= b[i] && b[i] <= 'Z') b[i] = (char) b[i] - 'A' + 'a';
  }
  
  int res = strcmp(a, b);
  if(res == 0){
    printf("0");
  }else if(res > 0){
    printf("1");
  }else{
    printf("-1");
  }
  return 0;
}