// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
    int i = 0, j = size - 1;
    int ab1 = 0;
    int ab2 = 0;
    if (arr[j] == value) {
      ab1 = j+1;
  }
    if (arr[i] == value) {
      ab2 = i;
    }
    while (i < j) {
        int ser = i + (j - i) / 2;
        if (arr[ser] == value && arr[ser + 1] != value) {
          ab1 = ser + 1;
          break;
        } else if (arr[ser] <= value) {
            i = ser + 1;
        } else {
            j = ser;
        }
    }   
 i = 0, j = size - 1;
    while (i < j) {
        int ser = i + (j - i) / 2;
        if (arr[ser] == value && arr[ser - 1] != value) {
          ab2 = ser;
          break;
        } else if (arr[ser] >= value) {
            j = ser;
        } else {
            i = ser + 1;
        }
    }
return ab1-ab2;
}
