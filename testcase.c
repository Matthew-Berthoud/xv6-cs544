#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int main(void)
{
  //hello();
  //helloYou("Matthew");
  printf(1, "%d\n", uptime());
  hello();
  helloYou("Matthew");
  printf(1, "Hello, world!\n");
  exit();
}
