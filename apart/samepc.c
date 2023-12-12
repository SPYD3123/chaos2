#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char const *argv[])
{
    fork();
    printf("hello world\n");
    return 0;
}
