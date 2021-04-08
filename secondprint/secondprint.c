#include "myprint.h"

void secondprint(char *arg) {
  myprint("I'm second, after ");
  myprint(arg);
  myprint(".\n");
}