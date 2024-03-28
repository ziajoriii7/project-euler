#include <stdio.h>

int isPalindrome(int num) {
  int reversed = 0, original = num, remainder;
  while (num != 0){
    remainder = num % 10;
    reversed = reversed * 10 + remainder;
    num /= 10;
  }

  return original == reversed;
}

int main() {
  int maxPalindrome = 0;
  for (int i = 999; i >= 100; i--){
    for (int j = 999; j >= 100; j--){
      int product = i * j;
      if (isPalindrome(product) && product > maxPalindrome){
        maxPalindrome = product;
      }
    }
  }

  printf("The largest palindrome made from the product of two 3-digit numbers is %d\n", maxPalindrome);
  return 0;

}
