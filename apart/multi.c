#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>


void *thread2(void *z){
    int n=*(int *)z;
    for (int i = 1; i <= 10; i++)
    {
        printf("%d\n",n*i);
    }
    
}

int main(int argc, char const *argv[])
{
    pthread_t tid2;
    int m=3;


    pthread_create(&tid2,NULL,thread2,(void*)&m);
    pthread_join(tid2,NULL);

    return 0;
}
