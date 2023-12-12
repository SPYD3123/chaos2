#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a=fork();
    if (a<0)
    {
        fprintf(stderr,"Fork failed\n");
    }
    else if (a==0)
    {
        printf("I am in the child process\n"
        );
        printf("My Pid is %d \n",getpid());
    }
    else{
        printf(
            "I am in parent process\n"
        );
    }
    
    
    
    return 0;
}
