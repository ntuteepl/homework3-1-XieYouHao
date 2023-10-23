#include <stdio.h>

int isPrime(int);

int main() {
  int input;
  scanf("%d", &input);
  if (isPrime(input)) {
    printf("YES");
  } else {
    printf("NO");
  }
  return 0;
}

int isPrime(int n) {
  static int x = 2;
  if (n <= 1) {
    return 0;
  }
  if (n % x == 0 && n != x) {
    return 0;
  }
  if (n == x) {
    return 1;
  }
  x++;
  isPrime(n);
}
