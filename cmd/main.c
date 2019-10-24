#include <stdio.h>
#include "otherlib/otherlib.h"
#include "binutils/binutils.h"

int main(int argc, char* argv[])
{
    int b = do_something();
    printf("num is %d\n", b);

    const char* str = get_string();
    printf("str is %s\n", str);

    return 0;
}
