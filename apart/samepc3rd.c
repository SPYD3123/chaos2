#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int b=10;
    int c=11;
    int a=fork();
    if (a==0)
    {
        printf("Subraction of 2 varaibles in child%d\n",c-b);
    }
    else if (a>0)
    {
        printf("addition of those 2 in parent %d\n",c+b);
    }
    
    
    return 0;
}
