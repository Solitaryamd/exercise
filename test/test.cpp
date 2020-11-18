#include <iostream>
#include<arpa/inet.h>
#include<stdio.h>
using namespace std;


int main()
{
    unsigned long a=0x12345678;
    unsigned char *p=(unsigned char *)(&a);

    printf("zhuji:%0x  %0x  %0x  %0x\n",p[0],p[1],p[2],p[3]);
    
    unsigned long b=htonl(a);
    p=(unsigned char *)&b;
    printf("wangluo:%0x  %0x  %0x  %0x\n",p[0],p[1],p[2],p[3]);
    return 0;
}

