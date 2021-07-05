#include <stdio.h>
#include <stdlib.h>

int main() {
  char trisize[256];
  char *p_end = NULL;
  int n1 = 0;
  for (;;) {
    printf("Enter your wanted triangle size from 1 to 50\n");
    scanf("%255s", trisize);
    sscanf(trisize, "%[0-9]d", trisize);
    n1 = (short)strtol(trisize, &p_end, 10);
    printf("You entered: %d\n", n1);
    if (!((n1 < 0) || (n1 > 50))) {
      break;
    }
    printf("That's not in range!\n");
  } 
  int spaces = 2 * n1 - 2;
  for (int looplen = 0; looplen < (n1 + 1); looplen++) {
    for (int numofspaces = 0; numofspaces < spaces; numofspaces++) {
      printf(" ");
    }
	spaces = spaces - 1;
    for (int numofstars = 0; numofstars < looplen; numofstars++) {
      printf("* ");

    }
    printf("\n");
  }
  return (0);
}
