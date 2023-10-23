#include <stdio.h>
#include <math.h>

int main() {
  int num1, num2;
  scanf("%d %d", &num1, &num2);
  int sum1 = 0, sum2 = 0;
  int tempNum1 = num1, tempNum2 = num2;
  int output;

  for (int i = 3; i >= 0; i--) {
    int temp1 = tempNum1 / pow(10, i);
    int temp2 = tempNum2 / pow(10, i);
    sum1 += temp1;
    sum2 += temp2;
    tempNum1 -= temp1 * pow(10, i);
    tempNum2 -= temp2 * pow(10, i);
  }

  if (sum1 == sum2) {
    output = num1 < num2 ? 1 : 0;
  } else {
    output = sum1 < sum2 ? 1 : 0;
  }

  if (output) {
    printf("%d", num1);
  } else {
    printf("%d", num2);
  }

  return 0;
}
