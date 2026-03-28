#include "types.h"
#include "stat.h"
#include "user.h"

int
main(void)
{
int *p = (int*)0xffffffff;
printf(1, "testkaccess: accessing illegal address\n");
printf(1, "value: %d\n", *p);
printf(1, "ERROR - should not reach here\n");
exit();
}
