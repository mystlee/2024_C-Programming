#include <stdio.h>

enum genre { COMIC, DOCU, DRAMA };
typedef enum genre GENRE;
struct book {
  char title[100];
  char author[20];
  GENRE type;
};

char *name[] = {"COMIC", "DOCU", "DRAMA"};

int main(void) {
  struct book b1 = {"바람과 함께 사라지다", "마가렛 미첼", DRAMA};
  printf("{%s, %s, %s } \n", b1.title, b1.author, name[b1.type]);

  return 0;
}