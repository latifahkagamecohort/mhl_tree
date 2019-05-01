#include <stdio.h>
#include <cs50.h>
#include <ctype.h>

int main(void)
{

    char* name = get_string("Name: ");
    char* p= get_string("p:");
    p = *name;
    name = &p;
    if(islower (*p[0]))

    {
     printf("%s",name);
    }
    else if(isupper (*name[0]))
    {
        printf("%c",*p);
    }


}