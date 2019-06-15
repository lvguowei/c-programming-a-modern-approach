#include <stdio.h>

void selection_sort(int array[], int last) {
  if (last <= 1)
    return;

  int largest = 0;

  for (int i = 1; i <= last; i++) {
    if (array[i] > array[largest]) {
      largest = i;
    }
  }

  int last_value = array[last];
  array[last] = array[largest];
  array[largest] = last_value;
  selection_sort(array, last - 1);
}

int main() {
  int MAX = 100;
  int d[MAX];
  int n = 0;

  for (int i = 0; i < MAX; i++) {
    scanf(" %d", &d[i]);
    n++;
    if (getchar() == '\n') {
      break;
    }
  }

  selection_sort(d, n - 1);
}
