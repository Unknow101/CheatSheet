#include <stdio.h>
#include <unistd.h>

void main() {
  setregid(getegid(), getegid());
  setreuid(geteuid(), geteuid());
  execve("/bin/sh", 0, 0);
  return;
}
