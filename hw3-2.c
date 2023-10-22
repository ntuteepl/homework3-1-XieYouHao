#include <stdio.h>

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

  int output = 1;
  int ab = 0;
  int ac = 0;
  int bc = 0;

  if ((input[0] > input[2] && input[0] < input[3]) || (input[1] > input[2] && input[1] < input[3])) {
    ab++;
    output++;
  } else if ((input[0] > input[4] && input[0] < input[5]) || (input[1] > input[4] && input[1] < input[5])) {
    ac++;
    output++;
  }

  if ((input[2] > input[0] && input[2] < input[1] && ab == 0) || (input[3] > input[0] && input[3] < input[1] && ab == 0)) {
    ab++;
    output++;
  } else if ((input[2] > input[4] && input[2] < input[5]) || (input[3] > input[4] && input[3] < input[5])) {
    bc++;
    output++;
  }

  if ((input[4] > input[2] && input[4] < input[3] && bc == 0 && output != 3) || (input[5] > input[2] && input[5] < input[3] && bc == 0 && output != 3)) {
    bc++;
    output++;
  } else if ((input[4] > input[0] && input[4] < input[1] && ac == 0 && output != 3) || (input[5] > input[0] && input[5] < input[1] && ac == 0 && output != 3)) {
    ac++;
    output++;
  }
  
  printf("%d", output);

  return 0;
}
