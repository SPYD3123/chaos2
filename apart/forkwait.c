#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/wait.h>
int main(int argc, char const *argv[])
{
    
    int a=fork();
    if (a==0)
    {
        printf("child process\n");
    }
    else if (a>0)
    {
        printf("Parent process");
        wait(NULL);
    }
    
    
    return 0;
}
