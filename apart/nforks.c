#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int n = 0;
    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        fork();
        printf("My process id is %d\n", getpid());
    }

    return 0;
}
