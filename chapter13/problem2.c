#include <stdio.h>
#include <string.h>

enum genre { COMIC, DOCU, DRAMA };
typedef enum genre GENRE;
struct book {
  char title[100];
  char author[20];
  GENRE type;
};

char *name[] = {"COMIC", "DOCU", "DRAMA"};
int equal_author(struct book b1, struct book b2) {
  if (strcmp(b1.author, b2.author) == 0)
    return 1;
  else
    return 0;
}
int main(void) {
  struct book b1 = {"바람과 함께 사라지다", "마가렛 미첼", DRAMA};
  struct book b2 = {"노인과 바다", "헤밍웨이", DRAMA};
  printf("{%s, %s, %s } \n", b1.title, b1.author, name[b1.type]);
  printf("{%s, %s, %s } \n", b2.title, b2.author, name[b2.type]);
  printf("equal_author()의 반환값:%d \n", equal_author(b1, b2));

  return 0;
}
