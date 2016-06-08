/*************************************************************************
	> File Name: test.c
	> Author: 
	> Mail: 
	> Created Time: Sun 10 Apr 2016 07:26:09 AM EDT
 ************************************************************************/

#include<stdio.h>


struct A
{
    char c;
    int  a;
};

struct B
{
    int b;
    struct A fa;
};

int main()
{
    struct B b;
    b.b = 8;
    b.fa.a = 10;
    struct A *pt = &b;
    printf("%c\n", pt->c);
    printf("%d\n", pt->a);
    return 0;
}
