#include <stdio.h>

long long largestPrimeFactor(long long n) {
  long long maxPrime = -1;
  while (n % 2 == 0){
    maxPrime = 2;
    n /= 2;
  }

  for (long long i = 3; i * i <= n; i += 2 ){
    while (n % i == 0 ){
      maxPrime = i;
      n = n / i;
    }
  }

  if (n > 2)
    maxPrime = n;

  return maxPrime;
}


int main(){
  long long n = 600851475143;
  printf("The largest prime factor of %lld is %lld\n", n, largestPrimeFactor(n));
  return 0;
}
