for (int i = 1; i < sizeof(arrInput)/sizeof(arrInput[0]); i++) {
    if (arrInput[i] == 0) {
      i = sizeof(arrInput)/sizeof(arrInput[0]);
      return 0;
    }

    int arr1[4]; int arr2[4];
    createArr(arr1, arrInput[0]);
    createArr(arr2, arrInput[i]);

    int a = 0, b = 0;

    for (int j = 0; j < sizeof(arr1)/sizeof(arr1[0]); j++) {
      for (int k = 0; k < sizeof(arr2)/sizeof(arr2[0]); k++) {
        if (arr1[j] == arr2[k]) {
          if (j == k) {
            a++;
          } else {
            b++;
          }
        }
      }
    }

    printf("%dA%dB\n", a, b);
  }