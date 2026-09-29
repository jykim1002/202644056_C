#include <stdio.h>

void fortune_cookie(char msg[])
{
    printf("%zu\n", sizeof(msg));
}

int main()
{
    char msg[] = "hello world hello world";

    printf("%zu\n", sizeof(msg));

    fortune_cookie(msg);
}