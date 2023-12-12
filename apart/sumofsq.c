#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void *thread(void* m){
    int n=*(int *)m;
    int sum=0;
    for (int i = 1; i <= n; i++)
    {
        sum+=i*i;
    }
    printf("Sum of square upto %d is %d",n,sum);
    
    return NULL;
}

int main(int argc, char const *argv[])
{
    pthread_t tid;
    int m=3;
    pthread_create(&tid,NULL,thread,(void*)&m);
    pthread_join(tid,NULL);

    return 0;
}
