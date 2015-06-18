/*************************************************************************
    > File Name: main.c
    > Author: wayne
    > Mail: @163.com 
    > Created Time: 2015年06月18日 星期四 10时44分39秒
 ************************************************************************/
#include<stdio.h>
#include<stdlib.h>
#include"mdd5.c"
int main()
{
    char *p;
    char *msg = "123456";
    p = md5_ret(msg);
    printf("%s\n", p);
    free(p);
    return 0;
}

