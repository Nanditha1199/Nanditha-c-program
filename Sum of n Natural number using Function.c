#include <stdio.h>
int sum(int n) {
  if(n==0)
    return 0;
  return n+sum(n-1);
}
int main(){
  int n=5;
  int result = sum(n);
  printf("%d",result);
  return 0;
}    
