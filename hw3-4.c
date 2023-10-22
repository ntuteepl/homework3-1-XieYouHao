#include <stdio.h>
#include <math.h>

int main() {
  int input;
  scanf("%d", &input);
  int pass = 1234;
  int tempNum1 = pass, tempNum2 = input;
  int arr1[4], arr2[4];

  for (int i = 3; i >= 0; i--) {
    int temp1 = tempNum1 / pow(10, i);
    int temp2 = tempNum2 / pow(10, i);
    tempNum1 -= temp1 * pow(10, i);
    tempNum2 -= temp2 * pow(10, i);
    arr1[3-i] = temp1;
    arr2[3-i] = temp2;
  }

  int a = 0, b = 0;
  for (int i = 0; i < sizeof(arr1)/sizeof(arr1[0]); i++) {
    for (int j = 0; j < sizeof(arr2)/sizeof(arr2[0]); j++) {
      if (arr1[i] == arr2[j]) {
        if (i == j) {
          a++;
        } else {
          b++;
        }
      }
    }
  }

  printf("%dA%dB", a, b);

  return 0;
}
