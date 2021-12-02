#include <ctype.h>
#include <stdio.h>
#include <string.h>
int main() {
  char password[200];
  int a = 1;

  {
    while (a < 2) {
      int x = 4;
      int i = 0;
      int L;
      int lc = 0;
      int uc = 0;
      int dig = 0;
      int sym = 0;
      printf("\nEnter your password:");
      scanf("%s", password);
      L = strlen(password);

      if (L >= 6) {

        while (i < L) {
          if (islower(password[i])) {
            x--;
            lc++;
            break;
          }
          i++;
        }

        i = 0;
        while (i < L) {
          if (isupper(password[i])) {
            x--;
            uc++;
            break;
          }
          i++;
        }

        i = 0;
        while (i < L) {
          if (isdigit(password[i])) {
            x--;
            dig++;
            break;
          }
          i++;
        }

        i = 0;
        while (i < L) {
          if (!isalpha(password[i]) && !isdigit(password[i])) {
            x--;
            sym++;
            break;
          }
          i++;
        }

        if (x == 0) {

          printf("\nEntered password is safe\n");
          char cp[200];
          int H;
          printf("\nConfirm Password:");
          scanf("%s", cp);

          int A = strcmp(password, cp);

          if (A == 0) {

            printf("\nPassword confirmed\n");
            break;
          } else {
            printf("\nPassword doesnt match\n");
            a--;
          }
        }

        else {
          printf("\nEntered password is unsafe\n");
          a--;
          if (lc == 0) {
            printf("\n**You did not enter Lower case alphabet**\n");
          }
          if (uc == 0) {
            printf("\n**You did not enter Upper case alphabet**\n");
          }
          if (dig == 0) {
            printf("\n**You did not enter digit**\n");
          }
          if (sym == 0) {
            printf("\n**You did not enter Symbol**\n");
          }
        }
      } else {
        printf("\nEnter atleast 6 characters.\n");
        a--;
      }
      a++;
    }
  }

  return 0;
}
