#include <stdio.h>

char *strings1[] = {"ten",     "eleven",  "twelve",    "thirteen", "fourteen",
                    "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};

char *strings2[] = {"twenty", "thirty",  "forty",  "fifty",
                    "sixty",  "seventy", "eighty", "ninty"};
char *strings3[] = {"one", "two",   "three", "foure", "five",
                    "six", "seven", "eight", "nine"};
int main() {
  int n1, n2;
  printf("Enter a two-digit number: ");
  scanf("%1d%1d", &n1, &n2);

  if (n1 == 1) {
    char *str = strings1[n2];
    printf("You entered the number %s.\n", str);
  } else {
    if (n2 == 0) {
      printf("You entered the number %s\n", strings2[n1 - 2]);
    } else {
      printf("You entered the number %s-%s\n", strings2[n1 - 2],
             strings3[n2 - 1]);
    }
  }
}
