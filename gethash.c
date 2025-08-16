#include <stdlib.h>
#include <stdio.h>

static const unsigned long djb2Hash (const char* str)
{
    unsigned long hash = 5381;
    int c;

    while (c = *str++)
    {
        hash = ((hash << 5) + hash) + c;
    }

    return hash;
}

int main (int argc, char** argv)
{
    if (argc != 2)
    {
        fprintf (stderr, "synax err: %s <string>\n", argv[0]);
        abort();
    }
    printf("hash of %s: %lu\n", argv[1], djb2Hash(argv[1]));
    return 0;
}