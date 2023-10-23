#include <stdio.h>

int inBetween(int, int, int);

int main() {
  int input[6];
  for (int i = 0; i < 6; i++) {
    scanf("%d", &input[i]);

    if (input[i] < 1 || input[i] > 24) {
      return 1;
    }
  }

  if (input[1] <= input[0] || input[3] <= input[2] || input[5] <= input[4]) {
      return 1;
  }

  int output;

  if (inBetween(input[0], input[2], input[3]) || inBetween(input[1], input[2], input[3]) || inBetween(input[2], input[0], input[1]) || inBetween(input[3], input[0], input[1])) { //ab
    if (inBetween(input[0], input[4], input[5]) || inBetween(input[1], input[4], input[5]) || inBetween(input[4], input[0], input[1]) || inBetween(input[5], input[0], input[1])) { //ac
      if (inBetween(input[2], input[4], input[5]) || inBetween(input[3], input[4], input[5]) || inBetween(input[4], input[2], input[3]) || inBetween(input[5], input[2], input[3])) { //bc
        output = 3;
      } else {
        output = 2;
      }
    } else {
      output = 2;
    }
  } else if (inBetween(input[2], input[4], input[5]) || inBetween(input[3], input[4], input[5]) || inBetween(input[4], input[2], input[3]) || inBetween(input[5], input[2], input[3])) { //bc
    output = 2;
  } else {
    output = 1;
  }

  printf("%d", output);

  return 0;
}

int inBetween(int a, int b, int c) {
  if (a > b && a < c) {
    return 1;
  }
  return 0;
}