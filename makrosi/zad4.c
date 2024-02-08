#include <stdio.h>
#include <stdlib.h>

#define COMMAND(NAME, TYPE) TYPE ## _ ## NAME ## _command
#define DEFINE_COMMAND(NAME, TYPE) void COMMAND(NAME, TYPE)(void); \
                                   void COMMAND(NAME, TYPE)(void) { \
                                       printf("This id %s %s command\n", #TYPE, #NAME); \
                                   }

DEFINE_COMMAND(quit, external);
DEFINE_COMMAND(quit, internal);

int main()
{
    external_quit_command();
    internal_quit_command();

    return 0;
}


