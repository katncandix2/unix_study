#include "apue.h"
#include <fcntl.h>

void 
set_f1(int fd,int flags)
{
    int val;

    if((val = fcntl(fd,F_GETFL,0))<0)
        err_sys("fcntl F_GETFL err");

    //turn on flags
    val |=flags;

    //turn off flags
    // val &=~flags;

    if(fcntl(fd,F_SETFL,val) <0)
        err_sys("fcntl F_SETFL err");

    exit(0);
}