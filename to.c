# include <stdio.h>
# include <cs50.h>
# include <ctype.h>
# include <string.h>

int main(void)
{
    string name = get_string("Name: ");
    if(islower(name[0]))
    {
        printf("%c", toupper(name[0]));
    }
    for(int i = 0; i<strlen(name); i++)
    {
        printf("%c", name[i+1]);
    }
}