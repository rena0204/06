#include <stdio.h>

void func(void)
{ 
    int x;
    printf("func x is at %p\n", &x);
}

int main(int argc, char *argv[])
{
    int x;
    printf("main x is at %p\n", &x);
    func();

    return 0;
}