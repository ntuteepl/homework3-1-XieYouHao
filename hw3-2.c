#include <stdio.h>

int main() {
  int input[6];
  for (int i = 0; i < 6; i++) {
    scanf("%d", &input[i]);

    if (input[i] < 1 || input[i] > 24) {
      return 1;
    }
  }
  int output = 1;

  for (int i = 0; i <= sizeof(input)/sizeof(input[0]) - 1; i += 2) {
    if (input[i+1] <= input[i]) {
      return 1;
    }
    switch (i) {
      case 0:
        if ((input[i] > input[2] && input[i] < input[3]) || (input[i] > input[4] && input[i] < input[5])) {
          output++;
        }
        if ((input[i+1] > input[2] && input[i+1] < input[3]) || (input[i+1] > input[4] && input[i] < input[5])) {
          output++;
        }
      break;
      case 2:
        if (input[i] > input[4] && input[i] < input[5]) {
          output++;
        }
        if (input[i+1] > input[4] && input[i+1] < input[5]) {
          output++;
        }
      break;
      default:
      break;
    }
  }
  
  printf("%d", output);

  return 0;
}
