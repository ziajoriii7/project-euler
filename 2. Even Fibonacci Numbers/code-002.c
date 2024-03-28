#include <stdio.h>

int main() {
  int term1 = 1, term2 = 2;
  int nextTerm = term1 + term2;
  int sumOfEvenTerms = term2;

  while (nextTerm <= 4000000){
    if (nextTerm % 2 == 0){
      sumOfEvenTerms += nextTerm;
    }

    term1 = term2;
    term2 = nextTerm;
    nextTerm = term1 + term2;
  }

  printf("Sum of Fibonacci numbers: %d\n", sumOfEvenTerms);
  return 0;

}
