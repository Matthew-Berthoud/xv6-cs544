#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int main(void)
{
    // hello();
    // helloYou("Matthew");
    printf(1, "num proc: %d\n", getNumProc());
    printf(1, "max pid: %d\n", getMaxPid());

    exit();
}
