#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define NUM_RANKS 13
#define NUM_SUITS 4
#define NUM_CARDS 5

int hand[NUM_CARDS][2];
bool straight, flush, four, three;
int pairs; /* can be 0, 1, or 2 */

void read_cards();
void analyze_hand();
void print_result();
bool card_exists(int rank, int suit);

int main() {
  for (;;) {
    read_cards();
    analyze_hand();
    print_result();
  }
}

void read_cards() {
  char ch, rank_ch, suit_ch;
  int card;
  bool bad_card;
  int rank, suit;
  int current_card = 0;

  for (card = 0; card < NUM_CARDS; card++) {
    hand[card][0] = 0;
    hand[card][1] = 0;
  }

  while (current_card < NUM_CARDS) {
    bad_card = false;
    printf("Enter a card: ");
    rank_ch = getchar();
    switch (rank_ch) {
    case '0': {
      exit(EXIT_SUCCESS);
      break;
    }
    case '2': {
      rank = 0;
      break;
    }
    case '3': {
      rank = 1;
      break;
    }
    case '4': {
      rank = 2;
      break;
    }
    case '5': {
      rank = 3;
      break;
    }
    case '6': {
      rank = 4;
      break;
    }
    case '7': {
      rank = 5;
      break;
    }
    case '8': {
      rank = 6;
      break;
    }
    case 9: {
      rank = 7;
      break;
    }
    case 't':
    case 'T': {
      rank = 8;
      break;
    }
    case 'j':
    case 'J': {
      rank = 9;
      break;
    }
    case 'q':
    case 'Q': {
      rank = 10;
      break;
    }
    case 'k':
    case 'K': {
      rank = 11;
      break;
    }
    case 'a':
    case 'A': {
      rank = 12;
      break;
    }
    default:
      bad_card = true;
      break;
    }

    suit_ch = getchar();
    switch (suit_ch) {
    case 'c':
    case 'C': {
      suit = 0;
      break;
    }
    case 'd':
    case 'D': {
      suit = 1;
      break;
    }
    case 'h':
    case 'H': {
      suit = 2;
      break;
    }
    case 's':
    case 'S': {
      suit = 3;
      break;
    }
    default:
      bad_card = true;
      break;
    }

    while ((ch = getchar()) != '\n') {
      if (ch != ' ') {
        bad_card = true;
      }
    }

    if (bad_card) {
      printf("Bad card; ignored. \n");
    } else if (card_exists(rank, suit)) {
      printf("Duplicate card; ignored\n");
    } else {
      hand[current_card][0] = rank;
      hand[current_card][1] = suit;
      current_card++;
    }
  }
}


void analyze_hand(void) {
  int rank, suit, card, pass, run;

  straight = true;
  flush = true;
  four = false;
  three = false;
  pairs = 0;

  /* sort cards by rank */
  for (pass = 1; pass < NUM_CARDS; pass++)
    for (card = 0; card < NUM_CARDS - pass; card++) {
      rank = hand[card][0];
      suit = hand[card][1];
      if (hand[card + 1][0] < rank) {
        hand[card][0] = hand[card + 1][0];
        hand[card][1] = hand[card + 1][1];
        hand[card + 1][0] = rank;
        hand[card + 1][1] = suit;
      }
    }

  /* check for flush */
  suit = hand[0][1];
  for (card = 1; card < NUM_CARDS; card++)
    if (hand[card][1] != suit)
      flush = false;

  /* check for straight */
  for (card = 0; card < NUM_CARDS - 1; card++)
    if (hand[card][0] + 1 != hand[card + 1][0])
      straight = false;

  /* check for 4-of-a-kind, 3-of-a-kind, and pairs by
     looking for "runs" of cards with identical ranks */
  card = 0;
  while (card < NUM_CARDS) {
    rank = hand[card][0];
    run = 0;
    do {
      run++;
      card++;
    } while (card < NUM_CARDS && hand[card][0] == rank);
    switch (run) {
    case 2:
      pairs++;
      break;
    case 3:
      three = true;
      break;
    case 4:
      four = true;
      break;
    }
  }
}

void print_result() {
  if (straight && flush) {
    printf("Straight flush");
  } else if (four) {
    printf("Four of a kind");
  } else if (three && pairs == 1) {
    printf("Full house");
  } else if (flush) {
    printf("Flush");
  } else if (straight) {
    printf("Straight");
  } else if (three) {
    printf("Three");
  } else if (pairs == 2) {
    printf("Tow pairs");
  } else if (pairs == 1) {
    printf("Pair");
  } else {
    printf("Hight cards");
  }
  printf("\n\n");
}

bool card_exists(int rank, int suit) {
  for (int card = 0; card < NUM_CARDS; card++) {
    if (hand[card][0] == rank && hand[card][1] == suit) {
      return true;
    }
  }
  return false;
}
