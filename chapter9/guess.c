#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_NUMBER 100

int secret_number;

void initialize_number_generator(void);
int new_secret_number(void);
void read_guesses(int secret);

int main() {
  char command;
  printf("Guess the secret number between 1 and %d.\n\n", MAX_NUMBER);
  initialize_number_generator();
  do {
    int secret = new_secret_number();
    printf("A new number has been chosen.\n");
    read_guesses(secret);
    printf("Play again? (Y/N) ");
    scanf(" %c", &command);
    printf("\n");
  } while(command == 'y' || command == 'Y');
  return 0;
}

void initialize_number_generator() {
  srand((unsigned) time(NULL));
}

int new_secret_number() {
  return rand() % MAX_NUMBER + 1;
}

void read_guesses(int secret) {
  int guess, num_guesses = 0;

  for(;;) {
    num_guesses++;
    printf("Enter guess: ");
    scanf("%d", &guess);
    if (guess == secret) {
      printf("You won in %d guesses!\n\n", num_guesses);
      return;
    } else if (guess < secret) {
      printf("Too low.\n");
    } else {
      printf("Too high.\n");
    }
  }
}
