#include <stdio.h>

int gcd(int a, int b){
  while (b != 0){
    int t = b;
    b = a % b;
    a = t;
  }

  return a;
}


int lcm(int a, int b){
  return a / gcd(a,b)*b;
}

int main(){
  int result = 1;
  for (int i = 2; i <= 20; i++){
    result = lcm(result, i);
  };

  printf("The smallest number divisable by all numbers from 1 to 20 is %d\n", result);
return 0;
}
