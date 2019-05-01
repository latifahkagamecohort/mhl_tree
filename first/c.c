#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
int main(void)
{
    string name = get_string("Name: ");
    int age = get_int("Age: ");
    int age0 [5] = {0,10,18,35};

    if(isupper(name[0]))
    {
        printf("Your name is valid\n");
    }
    else
    {
        printf("Your name is invalid\n");
    }

    if(age0[0]<=age<=age0[1])
    {
        printf("%s, your are %i and you are a child", name,age);
    }
    else if(age0[1]<=age<=age0[2])
    {
        printf("%s, your are %i and you are a teenager", name,age);
    }
    else if(age0[2]<=age<=age0[3])
    {
        printf("%s, your are %i and you are a young adult", name,age);
    }
    else if(age>age0[3])
    {
        printf("%s, your are %i and you are an adult", name,age);
    }
    else
    {
        printf("Your are dead or not yet born");
    }
}