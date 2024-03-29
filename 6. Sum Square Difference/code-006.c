#include <stdio.h>

int main(){
  int sumOfSquares = 0;
  int squareOfSum = 0;
  int difference;

  for (int i = 1; i <= 100; i++){
    sumOfSquares += i * i;
    squareOfSum += i;
  }

  squareOfSum = squareOfSum * squareOfSum;
  difference = squareOfSum -sumOfSquares;

  printf("The difference between the square of the sum and the sum of squares of the first 100 natural numbers is: %d\n ", difference);

  return 0;
}

