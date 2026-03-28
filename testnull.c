#include "types.h"
#include "stat.h"
#include "user.h"

int
main(void)
{
int *p = (int*)0;
printf(1, "testnull: about to dereference NULL\n");
printf(1, "value: %d\n", *p);
printf(1, "ERROR - should not reach here\n");
exit();
}
