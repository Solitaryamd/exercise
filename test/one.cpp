#include <iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

//将字符型的数据转换为16进制的数据
unsigned char ctox(char a)
{
        switch(a)
        {
        case '0'...'9':
            return (unsigned char)atoi(&a);
            break;
        case 'a'...'f':
            return 0xa+(a-'a');
            break;
        case 'A'...'F':
            return 0xa+(a-'A');
            break;
        default:
            break;
        }
}


int main()
{
    unsigned char a;
    cout<<"Please Enter:\n";
    cin>>a;
    int b=ctox(a);
    printf("%02x\n",b);

    return 0;
}

