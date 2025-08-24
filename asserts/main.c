#include "kassert/kassert.h"
#include "logger/logger.h"

int main ()
{
    log_start("stdout");
    assertSoft(false, NULL);
    assertStrict(false, "test");
    printf("its not working\n");
}