#include "myprint.h"
#include "aux_thirdprint.h"

void thirdprint(char *arg) {
  myprint("I'm ");
  myprint(RANK);
  myprint(", after ");
  myprint(arg);
  myprint(".\n");
}