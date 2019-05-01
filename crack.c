#include<stdio.h>
#include<cs50.h>
# include <string.h>
# include <ctype.h>
#define _XOPEN_SOURCE
#include <unistd.h>

int main(int argc, string argv[])
{
    if(argc!=2)
    {
        printf("Two arguments needed\n:");
        return 1;
    }
    else
    {
        return 0;
    }

    int k = atoi(argv[1]);
    if(k<0)
    {
        printf("the key is invalid\n");
        return 1;
    }

    else
    {
        char* plaintext = get_string("Enter your plaintext: ");



}

