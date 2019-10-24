#include <stdio.h>
#include <stdlib.h>
#include "otherlib/otherlib.h"
#include "binutils/binutils.h"

int main(int argc, char* argv[])
{
    int b = do_something();
    printf("num is %d\n", b);
    return 0;
}
