#include <math.h>
#include <stdio.h>
struct card {
  int value;
  char suit;
};
int main(void) {
  struct card cards[52];
  int i;
  for (i = 0; i < 13; i++) {
    cards[i].value = i % 13 + 1;
    cards[i].suit = 'c';
  }
  for (i = 0; i < 13; i++) {
    cards[i + 13].value = i % 13 + 1;
    cards[i + 13].suit = 'd';
  }
  for (i = 0; i < 13; i++) {
    cards[i + 26].value = i % 13 + 1;
    cards[i + 26].suit = 'h';
  }
  for (i = 0; i < 13; i++) {
    cards[i + 39].value = i % 13 + 1;
    cards[i + 39].suit = 's';
  }
  for (i = 0; i < 52; i++) {
    printf("%d:%c ", cards[i].value, cards[i].suit);
  }
  return 0;
}