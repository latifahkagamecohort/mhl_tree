#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct books
{
    string title;
    string authors;
};
int main(void)
{
    struct books b;
    strcpy(b.title,"cs50");
    printf("the title is %s", b.title);
}