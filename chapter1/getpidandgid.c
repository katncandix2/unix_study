#include "apue.h"

int main(void)
{
    printf("pid is :%d,gid is:%d",getpid(),getgid());
    exit(0);
}