#include <cs50.h>
#include <stdio.h>

// this code says Hello, (your name)
int main(void)
{
    string answer = get_string("what's your name ? ");
    printf("hello, %s\n", answer);
}
